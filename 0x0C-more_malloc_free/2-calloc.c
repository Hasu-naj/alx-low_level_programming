#include "main.h"

/**
 * _memset - function that fills memory with a constant byte
 * @s: a pointer to the start of the memory area
 * @b: constant
 * @n: the number of bytes of the memory area
 *
 * Return: (s) a pointer to the memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}

#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * *_calloc - allocates memory for an array
 * @nmemb: unsigned int
 * @size: unsigned int
 *
 * Return: pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *pt;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	pt = malloc(nmemb * size);

	if (pt == NULL)
	{
		return (NULL);
	}

	memset(pt, 0, nmemb * size);

	return (pt);
}
