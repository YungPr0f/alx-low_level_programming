#include <stdio.h>

/**
 * main - prints the numbers from 1 to 100
 * But for multiples of three, the number is replaced with "Fizz"
 * for the multiples of five, the number is replaced with "Buzz"
 * For multiples of both three and five print, replace with "FizzBuzz"
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz");
		else if (i % 3 == 0)
			printf("Fizz");
		else if (i % 5 == 0)
			printf("Buzz");
		else
			printf("%d", i);

		if (i < 100)
			printf(" ");
	}

	printf("\n");

	return (0);
}
