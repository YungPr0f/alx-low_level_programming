#include "main.h"

/**
 * more_numbers - prints the numbers, from 0 to 14, 10 times
 */

void more_numbers(void)
{
	int a;
	int b;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 15; b++)
		{
			if (b >= 10)
				_putchar(b / 10 + '0');

			_putchar(b % 10 + '0');
		}

		_putchar(10);
	}
}
