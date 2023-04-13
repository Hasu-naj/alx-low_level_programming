#include "main.h"

/**
* _strlen - a function that returns the length of a string
* @s: string
*
* Return: length of the string *s
 */
int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * *string_nconcat - concatenates two strings
 * @s1: string
 * @s2: string
 * @n: unsigned int
 *
 * Return: pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *new_s;
	unsigned int len1, len2;
	unsigned int x, y;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = strlen(s1);
	len2 = strlen(s2);

	if (n >= len2)
		n = len2;

	new_s = malloc(sizeof(char) * (len1 + n + 1));

	if (new_s == NULL)
		return (NULL);

	for (x = 0; x < len1; x++)
	{
		new_s[x] = s1[x];
	}
	for (y = 0; y < n; y++)
	{
		new_s[x + y] = s2[y];
	}
	new_s[x + y] = '\0';

	return (new_s);
}
