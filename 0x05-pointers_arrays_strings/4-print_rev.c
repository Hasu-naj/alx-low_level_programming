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
	int l;

	l = 0;
	while (*s != '\0')
	{
		l++;
	}
	for (i = l; l > 0; i--)
	{
		_putchar(*s);
	}
	_putchar('\n');
}
