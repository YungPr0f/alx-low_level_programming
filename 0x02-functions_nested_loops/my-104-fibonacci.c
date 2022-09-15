#include <stdio.h>

/**
 * main - Prints the first 50 Fibonacci numbers, starting with 1 and 2
 *
 * Return: Always 0 (Success)
 *
 */

int main(void)
{
	int a[] = 1;
	int b[] = 2;
	int i;
	long unsigned int j;
	int x[];

	printf("1 , 2");

	for (i = 0; i < 98; i++)
	{
		x = b + a;
		
		for (j = 0; j < (sizeof(x) / sizeof(x[0])); j++)
		{
			printf("%d", x[j]);
		}

		/* printf(", %li", x); */

		a = b;
		b = x;
	}

	printf("\n");

	return (0);
}
