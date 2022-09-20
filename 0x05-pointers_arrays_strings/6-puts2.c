#include "main.h"

/**
 * puts2 - prints every other character of a string,
 * starting with the first character
 * @str: the input string
 */

void puts2(char *str)
{
	int a = 0;

	while (a >= 0)
	{
		if (str[a] == '\0')
		{
			_putchar(10);
			break;
		}

		if (a % 2 == 0)
			_putchar(str[a]);

		a++;
	}
}
