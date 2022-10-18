#include "main.h"

/**
 * print_c - print a character
 * @pa: format of char
 * @format: format
 * Return: num of char for printf
 */
int print_c(char *format, va_list pa)
{
	(void)format;
	_putchar(va_arg(pa, int));
	return (1);
}
