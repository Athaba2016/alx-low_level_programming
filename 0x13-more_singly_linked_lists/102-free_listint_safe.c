#include "lists.h"

/**
 * find_listint_loop - find the loop contained in linked list
 * @head: A pointer to the head of the linked list
 * Return: if there is no loop - NULL
 */
size_t print_listint_safe(const listint_t *head);
{
	listint_t *tortoise, *hare;

	if (head == NULL || head->next == NULL)
		return (NULL);

	tortoise = head->next;
	hare = (head->next)->next;

	while (hare)
	{
		if (tortoise == hare)
		{
			tortoise = head;

			while (tortoise != hare)
			{
				tortoise = tortoise->next;
				hare = hare->next;
			}

			return (tortoise);

		}

		tortoise = tortoise->next;
		hare = hare->next;

	}

	return (NULL);
}
