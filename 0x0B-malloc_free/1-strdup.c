#include<stdlib.h>
#include "main.h"

/**
 * *_strdup - a function to make a copy of a string
 * @str: the string in question
 * Return: a pointer to a string
 */




char *_strdup(char *str)
{
int i = 0, size = 0;
char *m;

if (str == NULL)
	return (NULL);

for (; str[size] != '\0'; size++)
;

/*+1 on the size puts the end of string character*/
m = malloc(size * sizeof(*str) + 1);

if (m == 0)
	return (NULL);
else
{
	for (; i < size; i++)
		m[i] = str[i];
}
return (m);
}

