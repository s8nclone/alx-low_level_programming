#include "lists.h"

/**
 * free_listint2 - function
 * @head: pointer to head of list
 *
 * Description: frees listint_t list
 * sets the head to NULL
 *
 * Return: Always 0
 */

void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head == NULL)
		return;

	while (*head)
	{
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
	}

	head = NULL;
}
