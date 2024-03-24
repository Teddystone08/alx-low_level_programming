#include "list.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stddef.h>

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
		h = h->next;
		rtun++;
	}
	return (rtun);
}
