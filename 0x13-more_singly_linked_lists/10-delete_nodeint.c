#include "lists.h"

/**
 * delete_nodeint_at_index - a function that deletes the node at index
 * @head: a pointer to a pointer
 * @index: index of the node
 * Return: successful (0)
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *empo = *head;
	listint_t *cnt = NULL;
	unsigned int p = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(empo);
		return (1);
	}

	while (p < index - 1)
	{
		if (!empo || !(empo->next))
			return (-1);
		empo = empo->next;
		p++;
	}
	cnt = empo->next;
	empo->next = cnt->next;
	free(cnt);

	return (1);
}
