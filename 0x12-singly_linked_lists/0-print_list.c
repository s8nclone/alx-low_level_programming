#include "lists.h"
#include <stdio.h>

/**
 * print_list - func
 * @h: the list_t list
 *
 * Description: prints all the elements of the list_t list
 *
 * Return: number of nodes in h
 */

size_t print_list(const list_t *h)
{
	size_t ndes = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");

		else
			printf("[%d] %s\n", h->len, h->str);

		ndes++;
		h = h->next;
	}

	return (ndes);
}
