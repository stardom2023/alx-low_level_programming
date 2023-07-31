#include "lists.h"

/**
 * listint_len - a function that returns the number of elements
 * @h: a pointer
 * Return: number of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t nod = 0;

	while (h)
	{
		nod++;
		h = h->next;
	}
	return (nod);
}
