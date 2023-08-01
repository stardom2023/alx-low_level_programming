#include "list.h"

/**
 * free_listint_safe - function that frees
 * @h: a pointer to a pointer
 * Return: free elements
 */
size_t free_listint_safe(listint_t **h)
{
	size_t len = 0;
	int dif;
	listint_t *empo;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		dif = *h - (*h)->next;
		if (dif > 0)
		{
			empo = (*h)->next;
			free(*h);
			*h = empo;
			len++;
		}
		else
		{
			free(*h);
			*h = NULL;
			len++;
			break;
		}
	}

	*h = NULL;

	return (len);
}
