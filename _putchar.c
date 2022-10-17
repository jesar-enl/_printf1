#include <unistd.h>

/**
 * _putchar - writes a single character to the screen
 * @c: character to be printed to the screen.
 * Return: 1 on success, -1 on error
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
