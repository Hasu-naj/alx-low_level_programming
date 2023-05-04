#include "main.h"

/**
 * clear_bit - Function that clear the value of a bit to 1 at a given index
 * @index: index of the bit to clear
 * @n: pointer to the number to modify
 * Return: 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)

{
	int value;

	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	value = 1 << index;
	*n &= ~value;
	return (1);
}
