#include "main.h"

/**
 * _puts - prints a string to standard output
 * @str: pointer to the string to print
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	_putchar(10);
}
