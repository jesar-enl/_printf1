#include "main.h"

/**
 * print_pc - print %
 * @format: format
 * @pa: valist
 * Return: num of characters
 */
int print_pc(char *format, va_list pa)
{
	(void)format;
	(void)pa;
	_putchar('%');
	return (1);
}
