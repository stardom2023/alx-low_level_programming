#include "lists.h"

/**
 * add_nodeint_end - a function that adds a new node at the end
 * @head: pointer to a pointer to a node
 * @n: parameter
 * Return: address of new element
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *nod;
	listint_t *end = *head;

	nod = malloc(sizeof(listint_t));
	if (!nod)
		return (NULL);

	nod->n = n;
	nod->next = NULL;

	if (*head == NULL)
	{
		*head = nod;
		return (nod);
	}

	while (end->next)
		end = end->next;

	end->next = nod;

	return (nod);
}
