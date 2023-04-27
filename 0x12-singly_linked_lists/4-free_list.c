#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * free_list - frees a list_t list
 * @head: pointer to the head
 *
 * Return: Always 0.
 */
void free_list(list_t *head)
{
	list_t *current_node;

	current_node = head;
	while (current_node != NULL)
	{
		head = head->next;
		free(current_node->str);
		free(current_node);
	}
}
