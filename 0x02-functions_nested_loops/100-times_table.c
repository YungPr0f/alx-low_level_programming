#include "main.h"

/**
 * print_times_table - Prints the n times table, starting with 0
 * @n: the number that specifies the times table limit
 *
 * Return: void
 *
 */

void print_times_table(int n)
{
	int a;
	int b;

	if (!(n > 15 || n < 0))
	{
		for (a = 0; a <= n; a++)
		{
			for (b = 0; b <= n; b++)
			{
				int x = b * a;

				if (x >= 10 && x < 100)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(x / 10 + '0');
					_putchar(x % 10 + '0');
				}
				else if (x >= 100)
				{
					_putchar(' ');
					_putchar(x / 100 + '0');
					_putchar((x % 100) / 10 + '0');
					_putchar((x % 100) % 10 + '0');
				} else
				{
					if (b > 0)
					{
						_putchar(' ');
						_putchar(' ');
						_putchar(' ');
					}
					_putchar(x + '0');
				}
				if (b < n)
					_putchar(',');
			}
			_putchar(10);
		}
	}
}
