#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars, and initializes it with a specific char
 * @size: size of the array
 * @c: the array
 *
 * Return: NULL if size = 0, a pointer to the array, or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	if (size = 0)
		return NULL;
	
	char *arr;

	if (size = 0)
		return NULL;
	else
		arr = malloc(sizeof(char) * size);
		arr[0] = c;
}