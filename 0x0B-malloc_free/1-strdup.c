#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: the string to copy
 *
 * Return: NULL if str = NULL,  a pointer to the duplicated string,
 * or NULL if insufficient memory was available
 */

char *_strdup(char *str)
{
	char *copy;
	int length;

	length = _strlen(char *str);

	if (length == 0)
	{
		return (NULL);
	}
	else
	{
		copy = malloc(sizeof(char) * length);
		if (copy == NULL)
		{
			return (NULL);
		}

		return _strcpy(char *copy, char *str, length);
	}
}
