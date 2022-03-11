#include <stdio.h>

/**
 * main - prints the lowercase alphabet in reverse, followed by a new line.
 *
 *
 * Return: 0
 */

int main(void)
{
	char z;

	z = 'z';

	while (z >= 'a')
	{
		putchar(z);
		z--;
	}
	putchar('\n');

	return (0);
}
