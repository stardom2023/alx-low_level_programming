#include "lists.h"

/**
 * print_listint- a function that prints all the elements
 * @h: a pointer
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t nod = 0;

	while (h)
	{
		printf("%d\n", h->n);
		nod++;
		h = h->next;
	}
	return (nod);
}
