#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 0;
	int j = 1;
	int k = 2;

	for (i = 0; i <= 9; i++)
	{
		for (j = 1; j <= 9; j++)
		{
			for (k = 2; k <= 9; k++)
			{
				if (i != j && i < j)
				{
					putchar('0' + i);
					putchar('0' + j);
					putchar('0' + k);
				}
			if (i != j && i != k && j != k && i < j && j < k && i != 8)
			{
				putchar(',');
				putchar(' ');
			}
			}
		}
	}
	putchar('\n');
	return (0);
}
