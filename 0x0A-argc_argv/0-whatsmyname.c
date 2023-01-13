#include <stdio.h>
#include "main.h"

/**
 * main - Displays the program name
 * @argc: argument count
 * @argv: an array of arguments
 *
 * Return: Always 0 for Success
 *
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
