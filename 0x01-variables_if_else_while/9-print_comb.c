#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 0;

	for (i = 0; i <= 8; i++)
	{
		putchar('0' + i);
		putchar(',');
		putchar(' ');
	}
	putchar('0' + 9);
	return (0);
}
