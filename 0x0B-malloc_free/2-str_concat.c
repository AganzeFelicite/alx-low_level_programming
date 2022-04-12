#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * str_concat - a function for string concatination
 * @s1: array of the first string
 * @s2:array of the second string
 * Return: an array of strings
 */
char *str_concat(char *s1, char *s2)
{
char *p;
unsigned int len1, len2, i, size, j;
len1 = 0;
i = 0;
j = 0;
len2 = 0;
while (s1[len1])
	len1++;
while (s2[len2])
	len2++;
size = (len1 + len2 + 1);
p = malloc(sizeof(char) * size);
if (p == NULL)
{
return (NULL);
}
else
{
if (s1)
{
while (i < len1)
{
p[i] = s1[i];
i++;
}
}
if (s2)
{
while (i < (len1 + len))
{
p[i] = s2[j];
j++;
i++;
}
p[i] = '\0';
}
}
return (p);
}
