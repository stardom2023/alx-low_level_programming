#include "lists.h"

/**
 * reverse_listint -  a function that reverses a listint_t
 * @head: a pointer to a pointer
 * Return: a pointer to the first node
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *rev = NULL;
	listint_t *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = rev;
		rev = *head;
		*head = next;
	}

	*head = rev;

	return (*head);
}
