#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 1 (As instructed)
 */

int main(void)
{
	char str[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	fwrite(str, 59, 1, stderr);
	return (1);
}
