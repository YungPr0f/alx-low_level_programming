#include <stdio.h>

/**
 * main - Prints the sum of all even Fibonacci numbers less than 4,000,000
 *
 * Return: Always 0 (Success)
 *
 */

int main(void)
{
	int a = 1;
	int b = 2;
	/* int i; */
	int x;
	int y;

	while ((b + a) < 4000000)
	{
		x = b + a;
		
		if (x % 2 == 0)
			y += x;
		
		a = b;
		b = x;
	}

	printf("%d\n", y + 2);

	return (0);
}
