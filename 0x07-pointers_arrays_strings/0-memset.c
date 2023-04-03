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
