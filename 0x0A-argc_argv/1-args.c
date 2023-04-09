#include "main.h"
#include <stdio.h>

/**
 * main - print the number of arguments
 * @argc: number of arguments
 * @argv: array of argiments
 *
 * Return: Always (0) success
 */
int main(int argc, char* argv[])
{
	(void) argv; /*ignore argv*/
	printf("%d\n", argc - 1);

	return (0);
}
