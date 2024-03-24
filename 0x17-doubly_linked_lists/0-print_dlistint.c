#include "list.h"

/**
 * print_dlistint - function that all element
 * @h: node to print
 * Return:number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t rtun = 0;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		rtun++;
	}
	return (rtun);
}
