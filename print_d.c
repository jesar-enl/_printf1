#include "main.h"

/**
 * print_d - print an integer in base 10
 * @d: integer
 * Return: number of printed digits.
 */
int print_d( va_list d)
{
	int a[10];
	int counter = 0, j = 1, m = 1000000000, sum = 0, n;
	
	n = va_arg(d, int);
	if (n < 0)
	{
		n *= -1;
		_putchar('-');
		counter++;
	}
	a[0] = n / m;
	
	for (; j < 10; j++)
	{
		m /= 10;
		a[j] = (n / m) % 10;
	}
	
	for (j = 0; j < 10; j++)
	{
		sum += a[j];
		if (sum != 0 || j == 9)
		{
			_putchar('0' + a[j]);
			counter++;
		}
	}
	return (counter);
}
