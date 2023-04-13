#include "main.h"
#include <stdlib.h>

/**
 * *array_range - creates an array of integers
 * @min: minmum range
 * @max: maximum range
 *
 * Return: pointer
 */
int *array_range(int min, int max)
{
	int *ar;
	int size, i;

	if (min > max)
		return (NULL);

	size = max - min + 1;
	ar = malloc(sizeof(int) * size);

	if (ar == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		ar[i] = min + i;
	}

	return (ar);
}
