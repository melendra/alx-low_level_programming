#include <stdio.h>
/**
 * main - start of program
 *
 * Return: nothing if successful
 */

int main(void)
{
	int x = 0;

	while (x < 10)
	{
		printf("%d", x);
		x++;
	}

	putchar('\n');
	return (0);
}
