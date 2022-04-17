#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - the function that print numbers followed by new line
 * @separator: to be printed between numbers
 * @n: total number of numbers
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list ptr;
unsigned int i;
va_start(ptr, n);
for (i = 0; i < n; i++)
{
	printf("%d", va_arg(ptr, int));
	if (i != n - 1 && separator != NULL)
	{
		printf("%s", separator);
	}
}
printf("\n");
}
