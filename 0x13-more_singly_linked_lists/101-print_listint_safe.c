#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_listint_safe - Prints a linked list
 * @head: A pointer to the head of the list
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *current;
	size_t count = 0;

	if (head == NULL)
	{
		printf("Error: NULL pointer passed to print_listint_safe\n");
		exit(98);
	}

	current = head;
	while (current != NULL)
	{
		printf("[%p] %d\n", (void *)current, current->n);
		count++;
		if (current < current->next)
			current = current->next;
		else
		{
			printf("Error: linked list loop detected\n");
			exit(98);
		}
	}

	return (count);
}
