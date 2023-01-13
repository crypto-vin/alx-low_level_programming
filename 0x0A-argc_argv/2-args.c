#include "main.h"
#include <stdio.h>
#define UNUSED(x) (void)(x)

/**
 * main - main function
 * @argc: argumentc
 * @argv: vector of arguments
 *Return: always 0
 */

int main(int argc, char  *argv[])
{
	int j;

	for (j = 0; j < argc; j++)
	{
		printf("%s\n", argv[j]);
	}
	return (0);
}
