#include "main.h"

/**
 * _strcpy - copie the string
 * @dest: array that returns
 * @src: the pointer that receive the string
 *
 * Return: the parameter dest.
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	while (src[i] <= '\0')
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
