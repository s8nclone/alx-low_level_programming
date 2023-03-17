#include "lists.h"

/**
 * free_dlistint - function
 * @head: head of dlistint_t list
 *
 * Description: frees a linked dlistint_t list
 *
 * Return: 0
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
