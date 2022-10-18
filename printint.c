#include "main.h"

/**
 * _abs - calculates the absolute value
 * @number: input
 * Return: value
 */
int _abs(int number)
{
	if (number < 0)
		return (-1 * number);
	else
		return (number);
}

/**
 * contadordigit - counts the digits.
 * @number: input integer
 * Return: digit count
 */
int contadordigit(int number)
{
	int count = 0;
	int number2 = number;

	if (number <= 0)
		count += 1;
	while (_abs(number2) != 0)
	{
		number2 /= 10;
		count++;
	}
	return (count);
}

/**
 * integer - print an integer
 * @number: input
 * Return: digit count
 */
int integer(int number)
{
	unsigned int unint;
	int count;

	count = contadordigit(number);
	if (number  < 0)
	{
		_putchar('-');
		unint = -number;
	}
	else
		unint = number;

	if (unint >= 10)
		integer(unint / 10);
	_putchar(unint % 10 + '0');
	return (count);
}

/**
 * printint - print number
 * @format: format to print number
 * @pa: valist with number
 * Return: number of char
 */
int printint(char *format, va_list pa)
{
	int number = va_arg(pa, int);
	int num;
	(void)format;

	num = integer(number);

	return (num);
}
