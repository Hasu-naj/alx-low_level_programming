#include "main.h"

/**
 * _atoi - function that convert a string to an integer
 * @s: string
 *
 * Return: n
 */
int _atoi(char *s)
{
	int n = 0;
	int minus = 1;
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
		{
		minus = -1;
		}
		if (s[i] >= 48 && s[i] <= 57)
		{
			n = n * 10 + (s[i] - 48);
		}
		i++;
	}
	n = n * minus;
	return (n);
}

#include "main.h"
#include <stdio.h>

/**
 * main - multiplies two numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: (0) success, (1) error
 */
int main(int argc, char *argv[])
{
	int num1;
	int num2;
	int result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = _atoi(argv[1]);
	num2 = _atoi(argv[2]);
	result = num1 * num2;

	printf("%d\n", result);
	return (0);
}
