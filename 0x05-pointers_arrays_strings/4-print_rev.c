#include "main.h"
#include <string.h>
/**
 * print_rev -to print a string in reverse order
 * @s: a pointer to the string
 * Return: void
**/


void print_rev(char *s)
{
int len;
len = strlen(s);
while(len != 0)
{
_putchar(s[len]);
len--;
}
_putchar('\n');

}

