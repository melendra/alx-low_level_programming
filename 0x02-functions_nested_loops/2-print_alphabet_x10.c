#include "main.h"
/**
 * print_alphabet_x10 - Print lowercase alphabet 10 times
 */
void print_alphabet_x10(void)
{
	char n, k;

	for (n = 0; n <= 9; n++)
	{
		for (k = 'a'; k <= 'z'; k++)
		{
			_putchar(k);
		}
		_putchar('\n');
	}
}
