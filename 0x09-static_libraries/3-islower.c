#include "main.h"

/**
 * _islower -  checks for lowercase character
 * @c: c is parameter of integer type
 *
 * Return: Always 1 (Success)
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
