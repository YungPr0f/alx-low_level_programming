#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: the string
 */

int _strlen(char *s)
{
	int a = 0;

	while (*(s + a) != '\0')
		a++;

return (a);
}
