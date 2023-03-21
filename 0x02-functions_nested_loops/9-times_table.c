#include "main.h"

/**
 * times_table -  prints the 9 times table, starting with 0
 *
 * Return: times table
 */
void times_table(void)
{
	int i, j, p;

	for (i = 0; i <= 9; i++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		for (j = 1; j <= 9; j++)
		{
			p = (i * j);
			if ((p / 10) > 0)
			{
				_putchar((p / 10) + '0');
			}
			else
			{
				_putchar(' ');

			}
			_putchar((p % 10) + '0');
			if (j < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
