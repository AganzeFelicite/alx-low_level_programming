#include "main.h"

/**
 * _puts -the  function to print the strings
 * @str: a pointer to the string
 * Return: void
**/


void _puts(char *str)
{
int i = 0;
while (str[i])
{
_putchar(str[i]);
i++;
}
_putchar('\n');

}
