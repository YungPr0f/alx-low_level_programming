#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to reverse
 */

void rev_string(char *s)
{
	int a = 0;
	int b;
	int c;
	char *i;
	char j;

	while (a >= 0)
	{
		if (s[a] == '\0')
			break;

		a++;
	}

	i = s;

	for (b = 0; b < (a - 1); b++)
	{
		for (c = b + 1; c > 0; c--)
		{
			j = *(i + c);
			*(i + c) = *(i + (c - 1));
			*(i + (c - 1)) = j;
		}
	}
}
