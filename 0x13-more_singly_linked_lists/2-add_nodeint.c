#include "lists.h"

/**
 * add_nodeint - a function that adds a new node at the beginning
 * @head: pointer to a pointer to a node
 * @n: parameter
 * Return: address of element
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *nod;

	nod = malloc(sizeof(listint_t));
	if (!nod)
		return (NULL);

	nod->n = n;
	nod->next = *head;
	*head = nod;

	return (nod);
}
