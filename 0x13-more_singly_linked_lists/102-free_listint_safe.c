#include "lists.h"

/**
 * looped_listint_count - function
 * @head: A pointer to the head of the listint_t to check
 *
 * Description: counts the number of unique nodes in a
 * looped linked list
 *
 * Return: If the list is not looped - 0.
 *         Otherwise - the number of unique nodes in the list.
 */
size_t looped_listint_count(listint_t *head)
{
	listint_t *te, *hr;
	size_t ndes = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	te = head->next;
	hr = (head->next)->next;

	while (hr)
	{
		if (te == hr)
		{
			te = head;
			while (te != hr)
			{
				ndes++;
				te = te->next;
				hr = hr->next;
			}

			te = te->next;
			while (te != hr)
			{
				ndes++;
				te = te->next;
			}

			return (ndes);
		}

		te = te->next;
		hr = (hr->next)->next;
	}

	return (0);
}

/**
 * free_listint_safe - function
 * @h: A pointer to the address of
 * the head of the listint_t list.
 *
 * Description: frees a linstint_t list safely (i.e can
 * free list containing loops)
 *
 * Return: The size of the list that was freed.
 */

size_t free_listint_safe(listint_t **h)
{
	listint_t *tmp;
	size_t nodes, index;

	nodes = looped_listint_count(*h);

	if (nodes == 0)
	{
		for (; h != NULL && *h != NULL; nodes++)
		{
			tmp = (*h)->next;
			free(*h);
			*h = tmp;
		}
	}

	else
	{
		for (index = 0; index < nodes; index++)
		{
			tmp = (*h)->next;
			free(*h);
			*h = tmp;
		}

		*h = NULL;
	}

	h = NULL;

	return (nodes);
}
