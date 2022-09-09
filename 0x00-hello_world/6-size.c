#include <stdio.h>

/**
 * main - Entry point
 * 
 * Return: Always (0)
 */

int main(void)
{
	char sc;
	int si;
	long int sli;
	long long int slli;
	float sf;
	printf("Size of a char: %lu bytes(s)\n", sizeof(sc));
	printf("Size of an int: %lu bytes(s)\n", sizeof(si));
	printf("size of a long int: %lu bytes(s)\n", sizeof(sli));
	printf("Size of a long long int: %lu bytes(s)\n", sizeof(slli));
	printf("Size of a float: %lu bytes(s)\n", sizeof(sf));
	return (0);
}
