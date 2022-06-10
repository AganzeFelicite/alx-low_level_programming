#include "lists.h"
/*
 * dlistint_len - the function to count the number of nodes
 * @h: the header
 * Return: a size_t value
*/
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *iterator;
	size_t countnodes;
	countnodes = 0;
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
