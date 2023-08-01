#include "lists.h"

/**
 * insert_nodeint_at_index - a function that inserts a new node
 * @head: a pointer to a pointer
 * @idx: index of the nodes
 * @n: an integer parameter
 * Return: the address of new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int p;
	listint_t *nod;
	listint_t *empo = *head;

	nod = malloc(sizeof(listint_t));
	if (!nod || !head)
		return (NULL);

	nod->n = n;
	nod->next = NULL;

	if (idx == 0)
	{
		nod->next = *head;
		*head = nod;
		return (nod);
	}

	for (p = 0; empo && p < idx; p++)
	{
		if (p == idx - 1)
		{
			nod->next = empo->next;
			empo->next = nod;
			return (nod);
		}
		else
			empo = empo->next;
	}

	return (NULL);
}
