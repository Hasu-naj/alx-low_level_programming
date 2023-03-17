#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch = '0';
	char HEX = 'a';

	for (ch = '0'; ch <= '9'; ch++)
	{
		putchar(ch);
	}
	for (HEX = 'a'; HEX <= 'f'; HEX++)
	{
		putchar(HEX);
	}
	putchar('\n');
	return (0);
}
