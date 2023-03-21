#include "main.h"

/**
 *  _abs(int) -  the absolute value of an integer
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

