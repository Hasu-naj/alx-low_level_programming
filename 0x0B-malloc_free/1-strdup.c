#include "main.h"
#include <stdlib.h>

/**
 * *_strdup - function that returns a pointer to a newly allocated space
 * in memory
 * @str: input
 *
 * Return: returns a pointer to a newly allocated memory block that contains
 * a duplicate of the string
 */
char *_strdup(char *str)
{
	int i;
	int size;
	char *ar;

	if (str == NULL)
	{
		return (NULL);
	}
	size = 0;
	while (str[size] != '\0')
	{
		ar = malloc(size * sizeof(*str) + 1);
			size++;
	}
	if (ar == 0)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			ar[i] = str[i];
		}
		return (ar);
	}
}
