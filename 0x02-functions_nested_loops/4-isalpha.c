#include "main.h"

/**
 * _isalpha - Checks if character is an alphabet
 * @c: character
 *
 * Return: 1 if true, 0 if false
 *
 */

int _islower(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 41 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
