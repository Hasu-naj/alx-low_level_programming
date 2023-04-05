#include "main.h"

/**
 * _puts_recursion - function
 * @s: input
 *
 * Return: Always (0) success
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}

