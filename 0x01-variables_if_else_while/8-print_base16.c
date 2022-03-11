#include <stdio.h>

/**
 * main - prints all the numbers of base 16 in lowercase,
 * followed by a new line
 *
 * Return: 0
 */

int main(void)
{
	int n;
	char a;

	n = 48;
	a = 'a';

	while (n < 58)
	{
		putchar(n);
		n++;
	}
	while (a < 'g')
	{
		putchar(a);
		a++;
	}

	putchar('\n');

	return (0);
}
