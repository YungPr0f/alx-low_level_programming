#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int a;

	for (a = 97; a < 123; a++)
		if (a != 113 && a != 101)
			putchar(a);
	putchar(10);
	return (0);
}
