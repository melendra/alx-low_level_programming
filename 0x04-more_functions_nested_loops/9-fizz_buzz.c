#include <stdio.h>
/**
 * main - prints Buzz each numbers of 3 and 5.
 * Return: Always 0.
 */
int main(void)
{
	int n;

	n = 1;

	printf("%d", n);

	for (n = 2; n <= 100; n++)
	{
		if ((n % 3 == 0) && (n % 5 == 0))
		{
			printf("FizzBuzz");
			printf(" ");
		}
		else if (n % 3 == 0)
		{
			printf("Fizz");

			printf(" ");
		}
		else if (n % 5 == 0)
		{
			printf("Buzz");

			printf(" ");
		}
		else
		{
			printf("%d", n);
			printf(" ");
		}
	}

	printf("n");

	printf(" ");

	return (0);
}
