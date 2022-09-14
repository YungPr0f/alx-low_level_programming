#include "main.h"
#include "6-abs.c"
/**
 * print_last_digit - Prints the last digit of number
 * @x: The number to check
 *
 * Return: the value of the last digit
 */

int print_last_digit(int x)
{
	/* Find absolute value of number */
	if (x < 0)
		x = x * -1;

	x = x % 10;
	_putchar(x + '0');
	return (x);
}
