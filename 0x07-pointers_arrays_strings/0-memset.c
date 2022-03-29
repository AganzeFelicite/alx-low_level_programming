#include "main.h"

/**
 * _memset - function to fill the memory allocationts withconstants byte
 * @s: pointer to memory area
 * @b: a char variable
 * @n: unsigned integer
 * Return: s
*/


char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
s[i] = b;

}
return (s);
}

