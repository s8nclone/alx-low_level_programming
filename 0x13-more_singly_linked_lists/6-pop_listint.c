#include "lists.h"

/**
 * pop_listint - function
 * @head: head node
 *
 * Description: deletes the head node of list
 *
 * Return: head node's data (n) or 0 if empty
 */

int pop_listint(listint_t **head)
{
	listint_t *new = *head;
	int num;

	if (!*head)
		return (0);

	num = (*head)->n;
	*head = new->next;
	free(new);
	return (num);
}
