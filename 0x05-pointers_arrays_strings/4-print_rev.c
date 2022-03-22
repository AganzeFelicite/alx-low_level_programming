#include "main.h"
#include <string.h>
/**
 * print_rev -to print a string in reverse order
 * @s: a pointer to the string
 * Return: void
**/


void print_rev(char *s)
{
int i = 0;
while (s[i])
i++;

while (i--)
{
_putchar(s[i]);
}
_putchar('\n');


}

