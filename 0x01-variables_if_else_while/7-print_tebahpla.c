#include <stdio.h>
/**
 * main - start of program
 *
 * Return: nothing if successful
 */
int main(void)
{
	char n;

	for (n = 'z'; n >= 'a'; n--)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
