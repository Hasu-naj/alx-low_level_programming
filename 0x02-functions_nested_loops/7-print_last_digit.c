#include "main.h"
/**
 * print_last_digit -  prints the last digit of a number
 * @n: n is a parameter
 *
 * Return: Always 0 (Success)
 */

int print_last_digit(int n)
{
	int last;

	if (n < 0)
	{
		n = -n;
	}
	else
	{
		n = n;
	}
	last = n % 10;
	_putchar('0' + last);
	return (last);
}
