#include "lists.h"

/**
 * free_listint -frees a listint_t list
 * @head: pointer to the list
 */
void free_listint(listint_t *head)
{
	listint_t *start_node;
	listint_t *next_node;

	if (head)
	{
		start_node = head;
		next_node = head->next;
		while (next_node)
		{
			free(start_node);
			start_node = next_node;
			next_node = next_node->next;
		}
		free(start_node);
	}
}
