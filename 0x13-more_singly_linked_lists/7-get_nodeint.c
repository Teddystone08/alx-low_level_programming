#include "lists.h"
/**
 * get_nodeint_at_index - return node of listint_t list
 * @head: pointer to the list the list
 * @index: nth node
 * Return: node or NULL
 *
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node = head;
	unsigned int count = 0;

	while (node && count != index)
	{
		count++;
		node = node->next;
	}
	if (node && count == index)
		return (node);

	return (NULL);
}
