#include "main.h"
#include <stdio.h>

/**
 * main - print the name od the program
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always (0) Success
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	char *program_name = argv[0];

		printf("%s\n", program_name);

		return (0);
}
