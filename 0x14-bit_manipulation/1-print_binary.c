#include "main.h"

/**
 * print_binary - prints binary of a number
 * @n: decimal number to converted
 */

void print_binary(unsigned long int n)
{
	/*state base condition*/
	if (n <= 1)/*when n is 1 or 0 return*/
	{
		_putchar(n + '0');
		return;
	}
	/*using recursion and bitwise divide through by 2*/
	print_binary(n >> 1);
	/*when returning print remainder*/
	_putchar((n & 1) + '0');
}
