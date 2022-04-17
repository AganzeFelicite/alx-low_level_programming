#include <stdio.h>
#include <stdarg.h>
/**
 * sum_them_all - a function to do the sum
 * @n: number of variables
 * Return: int
 */



int sum_them_all(const unsigned int n, ...)
{
int sum = 0;
unsigned int i;
va_list ptr;
if (n == 0)
	return (0);
va_start(ptr, n);
for (i = 0; i < n ; i++)
{
	sum += va_arg(ptr, int);
}
return (sum);
}
