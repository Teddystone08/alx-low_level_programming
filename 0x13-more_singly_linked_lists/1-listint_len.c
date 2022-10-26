#include "lists.h"

/**
 * listint_len - return the number of element in a linked listint_t list
 * @h: pointer to exit list
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	const lintint_t *node = h;
	size_t count = 0;

	while (node)
	{
		count++;
		node = node->next;
	}
	return (count);
}
