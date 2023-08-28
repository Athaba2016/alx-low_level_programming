#include "lists.h"

/**
 * pop_listint - delets the head node of listint_t list
 * @head: pointer to the first element in the linkint_t list
 * Return: if the linked list is empty - the head nodes data (n)
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int ret;

	if (*head == NULL)
		return (0);

	tmp = *head;
	ret = (*head)->n;
	*head = (*head)->next;

	free(tmp);

	return (ret);

}
