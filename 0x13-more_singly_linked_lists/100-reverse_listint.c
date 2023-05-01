#include "lists.h"
/**
  * reverse_listint -  reverses a listint_t linked list
  * @head: double pointer
  * Return: a pointer to the first node of the reversed list
  */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev;
	listint_t *next;
	listint_t *current;

	prev = NULL;
	next = NULL;
	current = *head;

	while (current != NULL)
	{
		next = current->next;
		current->next = prev;
		prev = current;
		current = next;
	}

	*head = prev;
	return (*head);
}
