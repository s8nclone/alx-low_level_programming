#include "lists.h"

/**
 * sum_dlistint - function
 * @head: head of the dlistint_t list
 *
 * Description: sum al the data of a dlistint_t list
 *
 * Return: sum of all data
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum)
}
