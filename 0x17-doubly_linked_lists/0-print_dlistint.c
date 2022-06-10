#include "lists.h"
/*
 * print_dlistint - a function to print element of the linked list
 * @h: this is head pointer
 * Return: unsigned int value
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count;
	count = 0;
	if (!h)
	{
		return (0);
	}
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		count += 1;
	}
return (count);
}
