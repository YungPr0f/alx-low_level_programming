#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float e;

	fprintf(stderr, "Size of a char: %lu byte(s)\n", sizeof(a));
	fprintf(stderr, "Size of an int: %lu byte(s)\n", sizeof(b));
	fprintf(stderr, "size of a long int: %lu byte(s)\n", sizeof(c));
	fprintf(stderr, "Size of a long long int: %lu byte(s)\n", sizeof(d));
	fprintf(stderr, "Size of a float: %lu byte(s)\n", sizeof(e));
	return (0);
}
