#include "main.h"

/**
 * set_bit - Function that sets the value of a bit to 1 at a given index
 * @index: the index of the bit to set
 * @n: pointer to the number
 * Return: 1 if it worked, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)

{
	int value;

	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	value = 1 << index;
	*n |= value;
	return (1);
}
