#include <stdio.h>
#include "main.h"
/**
 * print_binary - equivalent of a decimal number that prints a binary
 * @n: the amount or number binary to be printed
 */
void print_binary(unsigned long int n)
{
	int jazzi, beautiful = 0;

	unsigned long int new;

	for (jazzi = 63; jazzi >= 0; jazzi--)

	{
		new = n >> jazzi;

		if (new & 1)
		{
			_putchar('1');
			beautiful++;
		}
		else if (new)
			_putchar('0');
	}
	if (!new)
		_putchar('0');
}
