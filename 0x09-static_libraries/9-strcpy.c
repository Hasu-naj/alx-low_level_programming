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
	int n = 0;

	while (src[n] != '\0')
	{
		n++;
	}
	for (i = 0 ; src[i] != '\0'; i++)
		dest[i] = src[i];
	while (i <= n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
