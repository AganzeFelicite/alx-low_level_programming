#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - functionto excute on each  element ot the array
 * @array: the array in question
 * @action: the pointer to the function
 * @size: items int the array
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{unsigned int i;
	if (action != NULL && array)
		for (i = 0; i < size; i++)
			action(array[i]);
	else
		return;
}
