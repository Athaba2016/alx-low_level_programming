#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes character c to stdout
 * @c: The print charactor
 *
 * Return: On success 1.
 * error, -1 is returned, errno is set accordingly.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
