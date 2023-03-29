#include "main.h"
#include <stdio.h>

/**
 * _strncat - concatenates two strings
 * @dest: string
 * @src: string
 * @n: integer
 *
 * Return: Return a string dest that concatanate two strings
 */
char *_strncat(char *dest, char *src, int n)
{
	int length;
	int j;

	length = 0;
	while (dest[length] != '\0')
		length++;
	for (j = 0; src[j] != '\0'; j++, length++)
	{
		if (j < n)
		{
			dest[length] = src[j];
		}
		else
		{
			break;
		}
	}
	dest[length] = '\0';
	return (dest);
}
