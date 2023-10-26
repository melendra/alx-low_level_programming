#include "main.h"
#include <stdio.h>
/**
 * binary_to_uint - binary can be converted through unsigned int
 * @b: A string that takes binary number or numbers
 * Return: A numbers that are coverted
 */
unsigned int binary_to_uint(const char *b)
{
	int blue;

	unsigned int baby = 0;

	if (!b)
		return (0);

	for (blue= 0; b[blue]; blue++)

	{
		if (b[blue] < '0' || b[blue] > '1')

			return (0);

		baby = 2 * baby + (b[blue] - '0');
	}
	return (baby);
}
