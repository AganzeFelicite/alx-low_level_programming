#include <stdio.h>

/**
 * main - prints the alphabet in lowercase,
 * followed by a new line
 *
 * Return: 0
 */

int main(void)
{
	int a;

	a = 'a';

	while (a <= 'z')
	{
		if (a == 'q' || a == 'e')
		{
			a++;
		} else
		{
			putchar(a);
			a++;
		}
	}

	putchar('\n');

	return (0);
}
