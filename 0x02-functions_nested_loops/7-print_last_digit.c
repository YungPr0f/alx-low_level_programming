#include "main.h"

/**
 * print_last_digit - Prints the last digit of number
 * @x: The number to check
 *
 * Return: the value of the last digit
 */

int print_last_digit(int x)
{
	if (x < 0)
		x = (x % 10) * -1;
	else
		x = x % 10;

	_putchar(x + 48);
	return (x);
}
