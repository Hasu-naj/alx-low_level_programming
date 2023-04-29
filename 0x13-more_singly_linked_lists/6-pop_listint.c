#include "lists.h"
#include <stdlib.h>
/**
  * pop_listint - deletes the head node of a listint_t linked list,
  * and returns the head node’s data (n)
  * @head: head of the list
  * Return: contents of head
  */
int pop_listint(listint_t **head)
{
	int data;
	listint_t *temp;

	if (*head == NULL)
	{
		return (0);
	}

	data = (*head)->n;
	temp = *head;
	*head = (*head)->next;

	free(temp);

	return (data);
}
