#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char sc;
	int si;
	long int sli;
	long long int slli;
	float sf;

	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(sc));
	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(si));
	printf("size of a long int: %lu byte(s)\n", (unsigned long)sizeof(sli));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(slli));
	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(sf));
	return (0);
}
