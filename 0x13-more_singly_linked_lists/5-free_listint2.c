#include "lists.h"
/**
 * free_listint2 - frees a listint_t list
 * @head: pointer to list
 * Return: null
 */
void free_listint2(listint_t **head)
{
	listint_t *start_node;
	listint_t *next_node;

	if (!head)
		return;

	start_node = *head;
	next_node = (*head)->next;
	while (next_node)
	{
		free(start_node);
		start_node = next_node;
		next_node = next_node->next;
	}
	free(start_node);
	*head = NULL;
}
