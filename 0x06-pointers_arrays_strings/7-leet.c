#include "main.h"

/**
 * leet - encodes a string into leetspeek.
 * @s: pointer to input string.
 * Return: Returns pointer to leetspeek string.
 */
char *leet(char *s)
{
	int i, j;
	char letters[] = "aAeEoOtTlL";
	char leet[] = "43071";

	i = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; letters[j] != '\0'; j++)
		{
			if (s[i] == letters[j])
			{
				s[i] = leet[j / 2];
			}
		}
	}
	return (s);
}
