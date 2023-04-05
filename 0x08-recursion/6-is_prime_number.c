#include "main.h"

/**
 * is_prime_number - function that demantrates if number is a prime number
 * @n: number
 *
 * Return: 1 if the input integer is a prime number, otherwise return 0
 */
int is_prime_number(int n)
{
	int i = 0;

	if (n < 2)
		i = 0;
	else if (n == 2)
		i = 1;
	else if (n % 2 == 1)
		i = 1;
	return (i);
}
