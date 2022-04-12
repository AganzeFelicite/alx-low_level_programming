#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * str_concate - a function for string concatination
 * @s1: array of the first string
 * @s2:array of the second string
 * Return: an array of strings
 */
char *str_concat(char *s1, char *s2)
{
char *p;
unsigned int len1,len2,i,size,j;
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
else{
while (s1[i]){
p[i] = s1[i];
i++;
}
while (s2[j]) 
{p[i+j] = s2[j];
j++;
}
return (p);
}
}
