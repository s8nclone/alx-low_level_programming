#include "lists.h"
#include <stdio.h>

/**
 * print_listint_safe - function
 * @head: pointer to head of list
 *
 * Description: prints linked list
 *
 * Return: no of nodes in list
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t i = 0;
	const listint_t *tmp, *nd;

	nd = head;
	while (nd != NULL)
	{
		printf("[%p] %d\n", (void *)nd, nd->n);
		tmp = nd;
		nd = nd->next;
		i++;
		if (tmp <= nd)
		{
			printf("-> [%p] %d\n", (void *)nd, nd->n);
			break;
		}
	}
	return (i);
}
