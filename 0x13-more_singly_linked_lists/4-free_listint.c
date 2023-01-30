#include "lists.h"

/**
 * free_listint - function
 * @head: head of linked list
 *
 * Description: frees a memory location
 *
 * Return: Always 0
 */

void free_listint(listint_t *head)
{
	listint_t *tmp;

	if (head == NULL)
		return;

	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
	free(head);
}
