#include "lists.h"
/*
 * add_nodeint_t - function to add anode at the beginning
 * @n: the value to go in the node
 * Return: a node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;

	if (!*head)	/* check if head is NULL */
		*head = new_node;
	else	/* head has nodes */
	{
		new_node->next = *head;
		(*head)->prev = new_node;	/* update prev pointer */
		*head = new_node;
	}
	return (new_node);

}
