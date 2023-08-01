#include "lists.h"

/**
 * pop_listint - a function that frees a listint_t list.
 * @head: a pointer to a pointer
 * Return: empty (0)
 */

int pop_listint(listint_t **head)
{
	listint_t *empo;
	int nod;

	if (!head || !*head)
		return (0);

	nod = (*head)->n;
	empo = (*head)->next;
	free(*head);
	*head = empo;

	return (nod);
}
