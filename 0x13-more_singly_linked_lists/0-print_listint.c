#include "lists.h"
#include <stdio.h>

/**
 * print_listint - function
 * @h: lists
 *
 * Description: prints all element
 *
 * Return: no of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next, i++;
	}
	return (i);
}
