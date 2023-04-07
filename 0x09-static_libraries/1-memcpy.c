#include "main.h"

/**
 * _memcpy - function that copies memory area
 * @dest: pointer to the memory area
 * @src: pointer to the memory area
 * @n: number of butes to copy
 *
 * Return: (dest) pointer to the dest memory
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
