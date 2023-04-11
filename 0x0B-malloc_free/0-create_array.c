#include "main.h"
#include <stdlib.h>

/**
 * *create_array - function that creates an array of chars, and initializes it
 * with a specific char
 * @size: parameter
 * @c: parameter
 *
 * Return: returns a pointer to the first element of the array
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ar;

	if (size == 0)
	{
		return (NULL);
	}
	ar = (char *) malloc(size * sizeof(char));
	if (ar == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		ar[i] = c;
	}
	return (ar);
}
