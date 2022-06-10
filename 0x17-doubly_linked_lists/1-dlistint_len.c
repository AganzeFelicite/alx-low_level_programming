#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a linked list
 *
 * @h: first node of the linked list
 * Return: number of elements in a linked list
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *iterator;
	size_t countnodes = 0;

	if (!h)
		return (countnodes);

	iterator = h;
	while (iterator)
	{
		countnodes++;
		iterator = iterator->next;
	}
	return (countnodes);
}
