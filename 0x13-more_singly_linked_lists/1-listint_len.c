#include "lists.h"

/**
 * listint_len - function
 * @h: head
 *
 * Description: number of elements in a linked list
 *
 * Return: no of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t nd = 0;

	while (h)
	{
		nd++;
		h = h->next;
	}

	return (nd);
}
