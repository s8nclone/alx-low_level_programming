#include "lists.h"

/**
 * get_dnodeint_at_index - function
 * @head: head of the dlistint_t list
 * @index: node to locate
 *
 * Description: locates a node in a dlistint_t list
 *
 * Return: Null if not exist, otherwise address to located node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	for (; index != 0; index--)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}
	return (head);
}
