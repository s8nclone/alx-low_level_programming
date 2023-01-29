#include "lists.h"

/**
 * list_len - func
 * @h: linked list_t list
 *
 * Description: finds the number of elements in a
 * linked list
 *
 * Return: number of elements in h
 */

size_t list_len(const list_t *h)
{
	size_t ements = 0;

	while (h != NULL)
	{
		ements++;
		h = h->next;
	}

	return (ements);
}
