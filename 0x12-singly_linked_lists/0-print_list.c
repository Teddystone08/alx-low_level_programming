#include "lists.h"

/**
 * print_list - print all element of a list_t list
 * @h: singly linked list
 * Return: number of element of list
 */
size_t print_list(const list_t *h)
{
	unsigned int i = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		h = h->next;
		i++;
	}

	return (i)
}

