#include <string.h>
#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>
#include "lists.h"
/**
 * print_dlistint - function that all element
 * @h: node to print
 * Return:number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t rtun = 0;

	for (h = 0; h != NULL; h = h->next)
	{
		printf("%d\n", h->n);
		rtun++;
	}
	return (rtun);
}
