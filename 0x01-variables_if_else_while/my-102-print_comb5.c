#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 *
 */

int main(void)
{
	int a;
	int b;
	int c;
	int d;

	for (a = 48; a < 58; a++)
	{
		for (b = 48; b < 58; b++)
		{
			for (c = b + 1; c < 58; c++)
			{
				for (d = c + 1; d < 58; d++)
				{
					putchar(a);
					putchar(b);
					putchar(32);
					putchar(c);
					putchar(d);
					putchar(44);
					putchar(32);
						
				}
			}
		}
	}

	putchar(10);
	return (0);
}
