#include "lists.h"
/**
  * sum_listint - sums all elements of a list
  * @head: pointer to the head of the list
  * Return: sum of all elements
  */
int sum_listint(listint_t *head)
{
	int sum;
	listint_t *current;

	current = head;
	sum = 0;
	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}

	return (sum);
}
