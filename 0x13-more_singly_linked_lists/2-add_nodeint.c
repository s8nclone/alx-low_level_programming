#include "lists.h"

/**
 * add_nodeint - function
 * @head: pointer to head address
 * @n: integer for the new node to contain
 *
 * Description: adds new node at the beginning of
 * listint_t list
 *
 * Return: NULL - if function fails
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;

	*head = new;

	return (new);
}
