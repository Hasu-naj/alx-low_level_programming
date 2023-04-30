#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
  * delete_nodeint_at_index - delete a node at index
  * @head: head of the list
  * @index: Index of the node that should be deleted
  * Return: 1 if it succeeded, -1 if it failed
  */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *current_node;
	listint_t *prev_node;

	i = 0;
	if (head == NULL || *head == NULL)
		return (-1);

	current_node = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		free(current_node);
		return (1);
	}

	for (i = 0; i < (index - 1); i++)
	{
		current_node = current_node->next;
		if (current_node == NULL)
			return (-1);
	}

	prev_node = current_node->next;
	current_node->next = prev_node->next;
	free(prev_node);
	return (1);
}
