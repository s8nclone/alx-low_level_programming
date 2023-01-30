#include "lists.h"

/**
 * get_nodeint_at_index - function
 * @head: head of linked list
 * @index: node index to return
 *
 * Description: returns nth node of linked list
 *
 * Return: NULL - if node does not exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *cnt;

	if (head == NULL)
		return (0);

	cnt = head;

	while (index != 0)
	{
		cnt = cnt->next;
		index--;
		if (cnt == NULL)
			return (0);
	}

	return (cnt);
}
