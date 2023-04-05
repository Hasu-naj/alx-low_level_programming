#include "main.h"

/**
 * number - function that help us to find the square root
 * @n:natural number starting from 1
 * @x: square root
 *
 * Return: square root
 */
int number(int n, int x)
{
	if (n * n == x)
		return (n);
	if (n == x)
		return (-1);
	return (1 * number(n + 1, x));
}

/**
 * _sqrt_recursion - function that returns the natural square root of a number
 * @n: the number to calculate a square of
 *
 * Return: square
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (number(1, n));
}
