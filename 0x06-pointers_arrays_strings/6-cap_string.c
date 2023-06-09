#include "main.h"

/**
 * cap_string - capitalizes all words of a string.
 * @s: pointer to input string.
 * Return: Returns pointer to capitalized string.
 */
char *cap_string(char *s)
{
	int i, j;
	char sep[] = " \t\n,;.!?\"(){}";

	i = 1;
	if (s[0] >= 97 && s[0] <= 122)
		s[0] = s[0] - 32;
	while (s[i] != '\0')
	{
		for (j = 0; sep[j] != '\0'; j++)
			if (s[i - 1] == sep[j] && (s[i] >= 97 && s[i] <= 122))
				s[i] = s[i] - 32;
		i++;
	}
	return (s);
}
