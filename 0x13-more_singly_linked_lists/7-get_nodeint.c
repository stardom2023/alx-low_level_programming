#include "lists.h"

/**
 * get_nodeint_at_index - a function that returns the nth node
 * @head: a pointer to a node
 * @index: index of the node
 * Return: return NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int p = 0;
	listint_t *empo = head;

	while (empo && p < index)
	{
		empo = empo->next;
		p++;
	}

	return (empo ? empo : NULL);
}
