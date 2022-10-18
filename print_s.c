#include "main.h"

/**
 * print_s - print a string
 * @pa: gtgtgt
 * @format: format
 * Return: num of str
 */
int print_s(char *format, va_list pa)
{
	char *string = va_arg(pa, char *);
	int cont;
	(void)format;

	if (string == NULL)
		string = "(null)";
	cont = _puts(string);
	return (cont);
}
