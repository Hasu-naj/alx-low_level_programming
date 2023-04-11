#include "main.h"
#include <stdlib.h>

/**
 * *_strdup - function that returns a pointer to a newly allocated space
 * in memory
 * @str: input
 *
 * Return: returns a pointer to a newly allocated memory block that contains
 * a duplicate of the string
 */
char *_strdup(char *str)
{
	int i;
	int m;
	char *ar;

	if (str == NULL)
		return (NULL);

	i = 0;
	while (str[i] != '\0')
		i++;
	
	ar = malloc(sizeof(char) * (i + 1));

	if (ar == 0)
		return (NULL);
	
	for (m = 0; str[m]; m++)
		ar[m] = str[m];
	
	return (ar);
}
