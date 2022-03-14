#include <stdio.h>

/**
 * main - print alphabets in lower and uppercase
 *
 * Return: 0
 */

int main(void)
{
	int a;
	int A;

	a = 'a';
	A = 'A';

	while (a <= 'z')
	{
		putchar(a);
		a++;
	}
	while (A <= 'Z')
	{
		putchar(A);
		A++;
	}
	putchar('\n');

	return (0);
}
