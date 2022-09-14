#include "main.h"

/**
 * _abs - compute the absolute value of an integer
 * @a: number to compute absolute value for
 *
 * Return: 1 if greater than zero, 0 if zero, -1 if less than zero
 *
 */

int _abs(int a)
{
	if (a < 0)
	{
		a = a * -1;
		return (a);
	}
	else
	{
		return (a);
	}
}
