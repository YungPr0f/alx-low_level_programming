#include "main.h"

/**
 * times_table - Prints the 9 times table, starting with 0
 *
 * Return: void
 *
 */

void times_table(void)
{
	int a;
	int b;
	int c = 0;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 10; b++)
		{
			int x;

			x = b * c;

			if (x > 9)
			{
				_putchar(' ');
				_putchar(x / 10 + '0');
				_putchar(x % 10 + '0');
			}
			else
			{
				if (b > 0)
				{
					_putchar(' ');
					_putchar(' ');
				}
				_putchar(x + '0');
			}

			if (b < 9)
				_putchar(',');
		}
		c++;
		_putchar(10);
	}
}
