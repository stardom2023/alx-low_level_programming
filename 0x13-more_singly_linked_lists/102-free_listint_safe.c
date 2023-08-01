#include "lists.h"

/**
 * free_listint_safe - a function that frees a listint_t list.
 * @h: pointer to a pointer to the node
 * Return: size of freed list
 */

size_t free_listint_safe(listint_t **h)
{
	size_t lint = 0;
	int div;
	listint_t *empo;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		div = *h - (*h)->next;
		if (div > 0)
		{
			empo = (*h)->next;
			free(*h);
			*h = empo;
			lint++;
		}
		else
		{
			free(*h);
			*h = NULL;
			lint++;
			break;
		}
	}

	*h = NULL;

	return (lint);
}
