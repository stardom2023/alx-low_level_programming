#include "lists.h"

/**
 * sum_listint - a function that returns the sum of all the data (n)
 * @head: a pointer to a node
 * Return: empty return NULL
 */

int sum_listint(listint_t *head)
{
	int add = 0;
	listint_t *empo = head;

	while (empo)
	{
		add += empo->n;
		empo = empo->next;
	}

	return (add);
}
