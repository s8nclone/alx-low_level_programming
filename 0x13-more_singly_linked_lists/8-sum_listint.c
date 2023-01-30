#include "lists.h"

/**
 * sum_listint - function
 * @head: pointer to head of list
 *
 * Description: returns sum of all the data (n) of a
 * linked list
 *
 * Return: 0
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
