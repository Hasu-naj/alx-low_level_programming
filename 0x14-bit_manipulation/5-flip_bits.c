#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip to get from
 * one number to another
 * @n: the first number
 * @m: the second number
 *
 * Return: the number of bits required to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diff;
	unsigned int i;

	diff = n ^ m;
	i = 0;

	while (diff)
	{
		if (diff & 1)
			i++;
		diff >>= 1;
	}

	return (i);
}
