#include <stdio.h>
#include <string.h>
/**
 * _memeset - function to fill the memory allocationts withconstants byte
 * @s:pointer to memory area
 * @b:a char variable
 * @n: unsigned integer
 * Return: void
**/

char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
for (i= 0;  i< n ; i++)
{
s[i]=b; 
}
return (s);
}
