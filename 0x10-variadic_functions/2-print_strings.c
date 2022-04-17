#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - the function
 * @separator: characaters to be printed between strings
 * @n: number of strings
 * Return: void
 */


void print_strings(const char *separator, const unsigned int n, ...)
{
char *c;
unsigned int i;
va_list ptr;
va_start(ptr, n);
for (i = 0;  i < n; i++)
{
c = va_arg(ptr, char*);
if (c != NULL)
{
printf("%s", c);
}
else
{
printf("nil");
}
if (i != n - 1 && separator != NULL)
{
printf("%s", separator);
}
}
printf("\n");
}

