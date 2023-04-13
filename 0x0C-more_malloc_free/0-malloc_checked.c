#include "main.h"
#include <stdlib.h>

/**
 * *malloc_checked - function that allocates memory using malloc
 * @b: unsigned int
 *
 * Return: pointer  to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *pt;

	pt = malloc(b);

	if (pt == NULL)
		exit(98);

	return (pt);
}
