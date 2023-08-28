#include "lists.h"

/**
 * add_nodeint - add a node at the beginning of listint_t list
 * @head: A point to the address of a listint_t lists
 * @n: An intriger for the new node to contain
 * Return: NULL if it fails - the address of the node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = *head;

	*head = new;

	return (new);
}
