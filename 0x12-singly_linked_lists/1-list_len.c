#include <stdlib.h>
#include "lists.h"

/**
 * list_len -  the number of elements in a linked list_t list.
 * @h: pointer to the list_t list
 *
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	size_t b = 0;

	while (h)
	{
		b++;
		h = h->next;
	}

	return (b);
}

