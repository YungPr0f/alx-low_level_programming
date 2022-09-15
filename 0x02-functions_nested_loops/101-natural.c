#include <stdio.h>

/**
 * main - Prints a sum of numbers below 1024 that are multiples of 3 or 5
 *
 * Return: Always 0 (Success)
 *
 */

int main(void)
{
	int a;
	int x;

	for (a = 0; a < 1024; a++)
	{
		if (a % 3 == 0 || a % 5 == 0)
			x += a;	
	}

	printf("%d\n", x);

	return (0);
}
