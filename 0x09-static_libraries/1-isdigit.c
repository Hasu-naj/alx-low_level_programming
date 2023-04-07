#include "main.h"

/**
 * _isdigit -  checks for a digit (0 through 9)
 * @c: c is parameter of integer type
 *
 * Return: Always 1 (Success)
 */

int _isdigit(int c)
{
		if (c >= 48 && c <= 57)
		{
		return (1);
		}
		return (0);
}
