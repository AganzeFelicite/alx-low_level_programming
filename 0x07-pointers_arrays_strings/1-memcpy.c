#include <string.h>
#include "main.h"
/**
 * _memcpy - to copy memory block
 * @dest: a pointer of destination
 * @scr: a pointer of origin
 * @n: number of elements
 * Return: dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{

memcpy(dest, src, n);

return (dest);

}

