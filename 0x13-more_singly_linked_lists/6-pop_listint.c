#include "lists.h"
/**
 * pop_listint - delete the head node of listin_t list
 * @head: pointer to the list
 * Return: head nodes
 */
int pop_listint(listint_t **head)
{
	int data;
	listint_t *first_node = *head;

	if (!first_node)
		return (0);

	data = (*head)->n;
	*head = first_node->next;
	free(first_node);
	return (data);
}
