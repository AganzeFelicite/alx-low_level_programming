#include "main.h"
/**
 * _strcat - string concatination function
 * @dest: the poointer to the first string
 * @src: pointer to the second string
 * Return: void
**/
char *_strcat(char *dest,char *src)
{
int i =0;
int len1 = 0;
int  len2 = 0;
while(dest[len1])
{
	len1++;
}
while(src[len2])
{
	len2++;
}
for(i=0;i<=len2;i++)
{
dest[len1+i] = src[i];
}
return(dest);
}

