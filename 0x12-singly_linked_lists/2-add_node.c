#include "lists.h"
#include <string.h>

/**
 * *add_node - func
 * @head: linked list head
 * @str: string element of the linked list
 *
 * Description: adds a node to the linked list
 *
 * Return: no of elements
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *newn;
	int len;

	newn = malloc(sizeof(list_t));
	if (newn == NULL)
	{
		free(newn);
		return (NULL);
	}

	newn->str = strdup(str);

	if (newn->str == NULL);
	{
		free(newn);
		return (NULL);
	}

	for (len = 0; str[len] != '\0'; len++)
		;

	newn->len = len;
	newn->next = *head;
	*head = newn;

	return (newn);
}
