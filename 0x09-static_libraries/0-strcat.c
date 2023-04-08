#include "main.h"
#include <stdio.h>

/**
 * _strcat - appends the src string to the dest string
 * @dest: string
 * @src: string
 *
 * Return: Return a string dest that concatanate two strings
 */
char *_strcat(char *dest, char *src)
{
	int length;
	int j;

	length = 0;
	while (dest[length] != '\0')
		length++;
	for (j = 0; src[j] != '\0'; j++, length++)
	{
		dest[length] = src[j];
	}
	dest[length] = '\0';
	return (dest);
}
