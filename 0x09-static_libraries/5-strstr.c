#include "main.h"

/**
 * _strstr - function that locates a substring
 * @haystack: string
 * @needle: string
 * Return: a pointer to the beginning of the located substring
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *len = haystack;
		char *ptr = needle;
	while (*len == *ptr && *ptr != '\0')
	{
		len++;
		ptr++;
	}
	if (*ptr == '\0')
		return (haystack);
	}
	return (0);
}
