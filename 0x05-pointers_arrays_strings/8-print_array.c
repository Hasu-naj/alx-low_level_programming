#include "main.h"
#include <stdio.h>
/**
 * print_array - prints n times the elements of an array
 * @a: the pointer to the elements
 * @n: number of elements to be printed
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0 ; i < n ; i++)
	{
		printf("%d", a[i]);

		if (i < n - 1)
		{
			printf(", ");
		}
	}
	putchar('\n');
}
