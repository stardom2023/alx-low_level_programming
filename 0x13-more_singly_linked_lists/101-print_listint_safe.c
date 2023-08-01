#include "lists.h"
#include <stdio.h>

/**
 * print_listint_safe - a function that prints a listint_t
 * @head: pointer to a node
 * Return: the number of nodes
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t node, indx = 0;

	node = looped_listint_len(head);

	if (node == 0)
	{
		for (; head != NULL; node++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}
	else
	{
		for (indx = 0; indx < node; indx++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (node);
}
/**
 * looped_listint_len - counts the unique codes
 * @head: a pointer
 * Return: successful (0)
 */

size_t looped_listint_len(const listint_t *head)
{
	const listint_t *hen, *tiger;
	size_t node = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	hen = head->next;
	tiger = (head->next)->next;

	while (tiger)
	{
		if (hen == tiger)
		{
			hen = head;
			while (hen != tiger)
			{
				node++;
				hen = hen->next;
				tiger = tiger->next;
			}

			hen = hen->next;
			while (hen != tiger)
			{
				node++;
				hen = hen->next;
			}

			return (node);
		}

		hen = hen->next;
		tiger = (tiger->next)->next;
	}

	return (0);
}
