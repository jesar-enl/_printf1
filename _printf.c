#include "main.h"

/**
 * _printf - print formatted data to stdout
 * @format: string tat contains the format
 * Return: number of chars written
 */
int _printf(char *format, ...)
{
	int written = 0, (*prt)(char *, va_list);
	char t[3];
	va_list pa;

	if (format == NULL)
		return (-1);
	t[2] = '\0';
	va_start(pa, format);
	_putchar(-1);
	while (format[0])
	{
		if (format[0] == '%')
		{
			prt = formatt(format);
			if (prt)
			{
				t[0] = '%';
				t[1] = format[1];
				written += prt(t, pa);
			}
			else if (format[1] != '\0')
			{
				written += _putchar('%');
				written += _putchar(format[1]);
			}
			else
			{
				written += _putchar('%');
				break;
			}
			format += 2;
		}
		else
		{
			written += _putchar(format[0]);
			format++;
		}
	}
	_putchar(-2);
	return (written);
}
