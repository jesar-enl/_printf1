#include <unistd.h>

/**
 * _putchar - print char
 * @ch: char to print
 * Returun: output
 */
int _putchar(char ch)
{
	return (write(1, &ch, 1));
}
