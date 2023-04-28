#include "lists.h"
#include <stdlib.h>
/**
  * free_listint - frees a listint_t list
  * @head: a pointer to the head of the listint_t
  */
void free_listint(listint_t *head)
{
	listint_t *current_node, *next_node;

	current_node = head;
	while (current_node != NULL)
	{
		next_node = current_node->next;
		free(current_node);
		current_node = next_node;
	}
}
