#include <stdio.h>
/**
 * main - start of program
 *
 * Return: nothing if successful
 */
int main(void)
{
	int d;
	char n;

	for (d = '0'; d <= '9'; d++)
	{
		putchar(d);
	}
	for (n = 'a'; n <= 'f'; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
