#include<stdlib.h>
#include "main.h"
/**
 * *create_array - function to create an array of char
 * @size: to specify the size of the array
 * @c: the char to be entered in the array
 * Return: to return an array
 */


char *create_array(unsigned int size, char c)
{
char *p;
unsigned int i = 0;
if (size == 0)
{
return (NULL);
}
p = (char *)malloc(size * sizeof(char));
if (p == NULL)
{
return (0);

}
else
{
while (i < size)
{
*(p + i) = c;
i++;
}
*(p + i) = '\0';

return (p);
}
}
