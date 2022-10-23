#include "list.h"

/**
 * print_list - print all element of a list_t list
 * @h: singlt linked list
 * Return: number of element of list
 */
size_t print_list(const list_t *h)
{
	size_t size;

	size = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[%d] %s\n", 0, "(nil)");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		h = h->next;
		size++;
	}

	return (size);

}

