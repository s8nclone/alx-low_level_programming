#include "lists.h"

/**
 * find_listint_loop - function
 * @head: pointer to head list
 *
 * Description: finds the loop in a list
 *
 * Return: address of the node where the loop starts
 * or NULL
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *sp = head, *fp = head;

	while (sp && fp && fp->next)
	{
		sp = sp->next;
		fp = fp->next->next;
		if (sp == fp)
		{
			sp = head;
			while (sp != fp)
			{
				sp = sp->next;
				fp = fp->next;
			}
			return (sp);
		}
	}
	return (NULL);
}
