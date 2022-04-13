#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - the function that prints a name
 * @name: pointer variable for the name
 * @void (*f)(char *): pointer to the function
 * Return: void
 */


void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
		f(name);
}
