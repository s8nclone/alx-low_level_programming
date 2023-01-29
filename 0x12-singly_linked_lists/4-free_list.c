#include "lists.h"

/**
 * free_list - func
 * @head: head of linked list
 *
 * Description: frees a list_t list
 */

void free_list(list_t *head)
{
	list_t *crrnt;
	list_t *nxt;

	crrnt = head;

	while (crrnt != NULL)
	{
		nxt = crrnt->next;
		free(crrnt->str);
		free(crrnt);
		crrnt = nxt;
	}
}
