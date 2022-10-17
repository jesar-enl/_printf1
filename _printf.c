#include "main.h"

/**
 * check_format - check if there is a valid format specifier
 * @format: possible valid format specifier
 * Return: pointer to valid function or NULL
 */
int (*check_format(const char *format))(va_list)
{
	int i = 0;
	prt p[] = {
		/*{"c", print_c},
		{"s", print_s},*/
		{"i", print_i},
		{"d", print_d},
		/*{"f", print_f},
		{"e", print_e},
		{"g", print_g},
		{"u", print_u},
		{"o", print_o},
		{"x", print_x},
		{"X", print_X},
		{"p", print_p}, */
		{NULL, NULL}
	};

	for (; p[i].t != NULL; i++)
	{
		if (*(p[i].t) == *format)
			break;
	}
	return (p[i].f);
}

/**
 * _printf - print the format provided
 * @format: list of arguments to print
 * Return: number of characters to print
 */
int _printf(const char *format, ...)
{
	va_list appl;
	int (*f)(va_list);
	unsigned int i = 0, counter = 0;

	if (format == NULL)
		return (-1);

	va_start(appl, format);
	while (format && format[i])
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
			counter++;
			i++;
			continue;
		}
		else
		{
			if (format[i + 1] == '%')
			{
				_putchar('%');
				counter++;
				i += 2;
				continue;
			}
			else
			{
				f = check_format(&format[i + 1]);
				if (f == NULL)
					return (-1);

				i += 2;
				counter += f(appl);
				continue;
			}
		}
		i++;
	}
	va_end(appl);
	return (counter);
}
