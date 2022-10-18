#include "main.h"

/**
 * format - selector for the type of function
 * @format: string
 * Return: a pointer
 */
int (*formatt(char *format))(char *format, va_list)
{
	int i;

	prt p[] = {
		{"%c", print_c},
		{"%s", print_s},
		{"%d", printint},
		{"%i", printint},
		{"%%", print_pc},
		{"%x", print_x},
		{"%X", print_X},
		{"%o", print_o},
		{NULL, NULL}
	};

	if (format[1] == ' ' || format[1] == '\0')
		return (NULL);
	for (i = 0; p[i].t; i++)
	{
		if (format[1] == p[i].t[1])
			return (p[i].f);
	}
	return (NULL);
}
