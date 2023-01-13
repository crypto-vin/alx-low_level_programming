#include <stdio.h>
#include "main.h"
#define UNUSED(x) (void)(x)

/**
 * main - print argument count
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 *
 */

int main(int argc, char *argv[])
{
	UNUSED(argv);
	printf("%d\n", argc - 1);
	return (0);
}
