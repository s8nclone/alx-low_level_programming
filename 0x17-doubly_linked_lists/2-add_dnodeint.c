#include "lists.h"

/**
 * add_dnodeint - function
 * @head: poniter to the head of the dlistint_t list
 * @n: integer for new node
 *
 * Description: adds new node at the beginnin of a dlistint_t list
 *
 * Return: NULL if fail, otherwise address of new node
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	new->next = *head;
	if (*head != NULL)
		(*head)->prev = new;
	*head = new;

	return (new);
}
