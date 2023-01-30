#include "lists.h"
#include <stdio.h>

/**
 * delete_nodeint_at_index - function
 * @head: head of liked list
 * @index: index to delete from
 *
 * Description: deletes the node at index of linked list
 *
 * Return: 1 if succeeded, -1 if failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *cnt;
	listint_t *tmp;

	if (head == NULL || (*head) == NULL)
		return (-1);

	cnt = *head;
	if (index == 0)
	{
		if ((*head)->next)
			(*head) = (*head)->next;
		else
			(*head) = NULL;
		free(cnt);
		return (1);
	}

	while (index != 1)
	{
		if (cnt->next == NULL)
			return (-1);

		cnt = cnt->next;
		--index;
	}
	tmp = cnt->next;
	if (cnt->next->next)
		cnt->next = cnt->next->next;
	else
		cnt->next = NULL;
	free(tmp);

	return (1);
}
