#include "lists.h"
/**
 * sum_listint - sum of all data(n) of listint_t list
 * @head: pointer to the list
 * Return: 0 if listint_t empty
 *
 */
int sum_listint(listint_t *head)
{
	listint_t *node = head;
	int sum = 0;

	while (node)
	{
		sum += node->n;
		node = node->next;
	}

	return (sum);
}
