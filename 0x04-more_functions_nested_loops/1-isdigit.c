#include "main.h"

/**
 * _isdigit -  checks for a digit (0 through 9)
 * @c: c is parameter of integer type
 *
 * Return: Always 1 (Success)
 */

int _isdigit(int c)
{
		if (c >= '1' && c <= '9')
		{
			return (1);
		}
		return (0);
}
