#include "lists.h"

/**
 * sum_listint - calculate the sum of all the data (n) of linked list
 * @head; A pointer  to the head of the linked list
 * Return: if the list is empty - 0 sum of the data
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
