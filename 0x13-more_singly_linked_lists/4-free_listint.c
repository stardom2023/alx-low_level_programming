#include "lists.h"

/**
 * free_listint - a function that frees a listint_t list
 * @head: a pointer
 * Return: space memory
 */

void free_listint(listint_t *head)
{
	listint_t *empo;

	while (head)
	{
		empo = head->next;
		free(head);
		head = empo;
	}
}
