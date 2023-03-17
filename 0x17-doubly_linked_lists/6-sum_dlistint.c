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

	if (head != NULL)
	{
		while (head->prev != NULL)
			head = head->prev;

		while (head != NULL)
		{
			sum += head->n;
			head = head->next;
		}
	}

	return (sum);
}
