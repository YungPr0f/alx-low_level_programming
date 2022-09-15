#include <stdio.h>

/**
 * main - Prints the first 50 Fibonacci numbers, starting with 1 and 2
 *
 * Return: Always 0 (Success)
 *
 */

int main(void)
{
	long int a = 1;
	long int b = 2;
	int i;
	long int x;

	printf("%li, %li", a, b);

	for (i = 0; i < 48; i++)
	{
		x = b + a;
		printf(", %li", x);
		a = b;
		b = x;
	}

	printf("\n");

	return (0);
}
