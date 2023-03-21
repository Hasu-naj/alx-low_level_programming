#include "main.h"

/**
 * print_sign - prints the sign of a number
 * @n: n is parameter of integer type
 *
 * Return: Always 0 (Success)
 */

int print_sign(int n)
{
	if (n > 0)
	{
		return (1);
		_putchar(43);
	}
	else if (n == 0)
	{
		return (0);
		_putchar(48);
	}
	else
	{
		return(-1);
		_putchar(45);
	}
}
