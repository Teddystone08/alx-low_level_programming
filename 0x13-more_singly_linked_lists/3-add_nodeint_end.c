#include "lists.h"

/**
 * add_nodeint_end - add a new node at the end of listint_t list
 * @head: pointer to the first element of list
 * @n: int to set in new node
 * Return: address of new element
 *
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *fis = *head;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (fis)
	{
		while (fis->next)
			fis = fis->next;
		fis->next = new;
	}
	else
		*head = new;
	return (new);
}
