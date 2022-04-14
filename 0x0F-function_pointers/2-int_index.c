#include <stdio.h>
#include "function_pointers.h"
/**
 * int_index - a function to search for  a number in an array
 * @array: the array in question
 * @size: this is the size of the arr
 * @cmp: a pointer to the functions
 * Return: type of ant int
 */

int int_index(int *array, int size, int (*cmp)(int))
{
int i;
if (array && cmp)
	for (i = 0; i < size; i++)
		if (cmp(array[i] != 0)
				return (i);
		return (-1);

}
