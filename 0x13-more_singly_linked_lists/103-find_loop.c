#include "lists.h"

/**
 * find_listint_loop - finds a linked list
 * @h: A pointer to the node in the linked list
 *Return: number of nodes in the find list
 */
size_t_find_listint_loop(listint_t *head)
{

	size_t len=0
	int diff;
	listint_t *temp;

	if(!h || !*h)
		return (0);

	while (*h)
	{
		diff = *h - (*h)->next;
		if (diff > 0)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
			len++;
		}
		else
	        {
			free(*h);
			*h = NULL;
			len++;
			break;

	     }

	}

	*h = NULL;

	return (len);
}
