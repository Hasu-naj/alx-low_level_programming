#include "main.h"

/**
 *  _abs -  the absolute value of an integer
 *  @n: n is a parameter
 *
 *  Return: Always 0 (Success)
 */

int _abs(int n)
{
	if (n < 0)
	{
		n = (-1) * n;
	}
	else
	{
		n = n;
	}
	return (n);
	_putchar('\n');
}

