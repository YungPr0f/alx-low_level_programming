#include <stdio.h>

/**
 * main - Prints the first 50 Fibonacci numbers, starting with 1 and 2
 *
 * Return: Always 0 (Success)
 *
 */

int main(void)
{
	int a = 1;
	int b = 2;
	int x;

	printf("%d, %d, ", a, b);
	
	int i;

	for (i = 0; i < 48; i++)
	{
		x = b + a;
		printf("%d, ", x);
		a = b;
		b = x;
	}

	return (0);
}
