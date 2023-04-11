#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * *str_concat - function that concatenates two strings
 * @s1: string
 * @s2: string
 *
 * Return: pointer
 */
char *str_concat(char *s1, char *s2)
{
	int i;
	int size1;
	int size2;
	char *strcat;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	size1 = strlen(s1);
	size2 = strlen(s2);
	strcat = malloc((size1 + size2) * sizeof(char) + 1);
	if (strcat == NULL)
		return (NULL);

	for (i = 0; i <= size1 + size2; i++)
	{
		if (i < size1)
			strcat[i] = s1[i];
		else
			strcat[i] = s2[i - size1];
	}
	strcat[i] = '\0';
	return (strcat);
}
