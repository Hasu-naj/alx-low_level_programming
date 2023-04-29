#include "lists.h"
/**
  * get_nodeint_at_index - gets the nth node of the list
  * @head: head of the list
  * @index:  unsigned integer index
  * Return: pointer to the nth node
  */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *current;

	current = head;
	i = 0;

	while (current != NULL)
	{
		if (i == index)
		{
			return (current);
		}
		i++;
		current = current->next;
	}

	return (NULL);
}
