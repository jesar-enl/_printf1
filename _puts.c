#include "main.h"

/**
 * _puts - prints a string, new line to stdout
 * @string: input string
 * Return: count of string
 */
int _puts(char *string)
{
	int cont = 0;

	while (*string)
	{
		_putchar(*string);
		string++;
		cont++;
	}
	return (cont);
}
