#include "main.h"
#include <stdlib.h>

/**
 * *argstostr - function that concatenates all the arguments of your program
 * @ac: integer
 * @av: array of string
 *
 * Return: pointer
 */
char *argstostr(int ac, char **av)
{
	int i;
	int j;
	int len;
	int count = 0;
	char *s;

	if (ac == 0 || av == NULL)
		return (NULL);

	len = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			len++;
		}
		len++;
	}
	s = malloc((len + 1) * sizeof(char));
	if (s == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			s[count] = av[i][j];
			count++;
		}
		s[count] = '\n';
		count++;
	}
	s[count] = '\0';
	return (s);
}
