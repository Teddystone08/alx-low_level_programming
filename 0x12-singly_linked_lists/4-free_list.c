#include "lists.h"

/**
 * free_list - frees a list_t list
 * @head: head of linked list
 * Return: void
 */

void free_list(list_t *head)
{
	list_t *temp;

	
	while (head)
	{
		temp = temp->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
