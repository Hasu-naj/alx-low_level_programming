#include <stdio.h>
#include "lists.h"

/**
  * print_list - prints all elements of a list_t list
  * @h: pointer to the head of the list
  * Return: number of nodes in the list
  */
size_t print_list(const list_t *h)
{
	size_t i;

	i = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		i++;

		h = h->next;
	}

	return (i);
}
