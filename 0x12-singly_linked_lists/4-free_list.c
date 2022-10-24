#include "lists.h"
/**
 * free_list - frees a list_t list
 * @head: head of linked list
 * Return: void
 */

void free_list(list_t *head)
{
	list_t *temp;
	
	for (temp = head; temp != NULL; temp = temp->next)
	{
	`1free(temp->str);
		free(temp);
	}
}
