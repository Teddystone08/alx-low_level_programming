#include "lists.h"
/**
 * insert_node_at_index - inserts new node at a given position
 * @head: pointer
 * @idx: posiion to add the node
 * @n: data for a new node
 * Return: new node or NULL
 *
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *first_node = *head;
	listint_t *new_node;
	unsigned int index;
	unsigned int count = 0;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (*head);
	}

	index = idx - 1;
	while (first_node && count != index)
	{
		count++;
		first_node = first_node->next;
	}

	if (count == index && first_node)
	{
		new_node->next = first_node->next;
		first_node->next = new_node;
		return (new_node);
	}

	free(new_node);
	return (NULL);
}


