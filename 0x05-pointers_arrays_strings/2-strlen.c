#include "main.h"

/**
 * _strlen - find the length of a string
 * @s:pointer to the string
 * Return : void
*/


int _strlen(char *s)
{
int i;
while(*s != '\0')
{
s++;
i++;
}
return (i);
}
