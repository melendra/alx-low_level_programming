#include "main.h"
#include <stdio.h>
/**
 * print_alphabet - start of program
 *
 * Return: nothing if successful
 */
void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
