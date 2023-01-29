#include "lists.h"
#include <string.h>
#include <stdio.h>

/**
 * add_node_end - func
 * @head: character to print
 * @str: string for new node
 *
 * Description: add a node to the end of linked list
 *
 * Return: new node
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *crnt;
	list_t *newn;
	int c;

	crnt = *head;
	while (crnt && crnt->next != NULL)
		crnt = crnt->next;

	for (c = 0; str[c] != '\0'; c++)
		;

	newn = malloc(sizeof(list_t));
	if (newn == NULL)
	{
		free(newn);
		return (NULL);
	}

	newn->str = strdup(str);
	if (newn->str == NULL)
	{
		free(newn);
		return (NULL);
	}
	newn->len = c;
	newn->next = NULL;

	if (crnt)
		crnt->next = newn;
	else
		*head = newn;
	return (newn);
}
