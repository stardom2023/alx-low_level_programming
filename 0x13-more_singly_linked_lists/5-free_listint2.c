#include "lists.h"

/**
 * free_listint2 - a function that frees a listint_t list.
 * @head: a pointer to a pointer
 * Return: memory space freed
 */

void free_listint2(listint_t **head)
{
	listint_t *empo;

	if (head == NULL)
		return;

	while (*head)
	{
		empo = (*head)->next;
		free(*head);
		*head = empo;
	}

	*head = NULL;
}
