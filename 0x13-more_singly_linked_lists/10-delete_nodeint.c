#include "lists.h"

/**
 * delete_nodeint_at_index - delete the node at index of list
 * @head: pointer to the list
 * @index: delete pointtion in the list
 * Return: 1 if succed, -1 if failed
 *
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *first_node = *head;
	listint_t *node_delete = *head;
	unsigned int idx;
	unsigned int count = 0;

	if (index == 0)
	{
		*head = node_delete->next;
		free(node_delete);
		return (1);
	}

	idx = index - 1;
	while (first_node && count != idx)
	{
		count++;
		first_node = first_node->next;
	}

	if (count == idx && first_node)
	{
		node_delete = first_node->next;
		first_node->next = node_delete->next;
		free(node_delete);
		return (1);
	}

	return (-1);
}
