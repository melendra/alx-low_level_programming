#include "main.h"
#include <unistd.h>
/**
 * main - _putchar writes the character c stdout
 * @c: The character prints
 * return On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
