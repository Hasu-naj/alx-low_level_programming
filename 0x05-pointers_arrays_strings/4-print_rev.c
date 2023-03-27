#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line
 * @s: string
 *
 * Return: Always 0.
 */
void print_rev(char *s)
{
	int i;

	for (i = 0; s[i] = ('\0' - 1); i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
