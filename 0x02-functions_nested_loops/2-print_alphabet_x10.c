#include "main.h"

/**
 * print_alphabet_x10 - Print the alphabets in lower case 10 times
 *
 * Return: void
 *
 */

void print_alphabet_x10(void)
{
	int a;
	int b;

	for (a = 0; a < 10; a++)
	{
		for (b = 97; b < 123; b++)
			_putchar(b);

		_putchar(10);
	}
}
