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
	x = _abs(x);
	x = x % 10;
	_putchar(x + 48);
	return (x);
}
