#include "lists.h"

/**
 * print_listint - printts all element of a listint_t list.
 * @h: pointer to the list
 * Return: number of nodes
 *
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *node = h;
	size_t count = 0;

	while (node)
	{
		printf("%i\n", node->n);
		count++;
		node = node->next;
	}

	return (count);
}
