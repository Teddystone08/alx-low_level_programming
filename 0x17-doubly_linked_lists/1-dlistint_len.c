#include "lists.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * dlistint_len - function that returns number of element
 * @h: pointer to the head list
 * Return:number of nodes in list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t head = 0;
	const dlistint_t *c = h;

	while (c != NULL)
	{
		head++;
		c = c->next;
	}
	return (head);
}
