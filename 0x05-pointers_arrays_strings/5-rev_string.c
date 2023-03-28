#include "main.h"

/**
 * rev_string - function that reverses a string.
 * @s: string
 *
 * Return: Always 0.
 */
void rev_string(char *s)
{
	char temp = s[0];
	int l = 0;
	int i;

	while (s[l] != 0)
		l++;
	for (i = 0; i < l; i++)
	{
		l--;
		temp = s[i];
		s[i] = s[l];
		s[l] = temp;
	}
}
