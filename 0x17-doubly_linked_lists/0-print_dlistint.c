#include "lists.h"

/**
 * print_dlistint - function
 * @h: head of dlistint_t list
 *
 * Description: prints all the elements of a dlistint_t list
 *
 * Return: number of nodes in the list
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t nodes = 0;

	if (h == NULL)
		return (node);

	while (h)
	{
		printf("%d\n", h->n);
		node++;
		h = h->next;
	}
	return (node);
}
