#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Displays the minimum amount of change
 * @argc: argument count
 * @argv: array of arguments
 *
 * Return: if Success, 0 else 1
 *
 */

int main(int argc, char *argv[])
{
	int num;
	int i;
	int outcome;

	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	num = atoi(argv[1]);

	outcome = 0;

	if (num < 0)
	{
		printf("0\n");
		return (0);
	}

	for (i = 0; i < 5 && num >= 0; i++)
	{
		while (num >= coins[j])
		{
			outcome++;

			num -= coins[j];
		}
	}

	printf("%d\n", outcome);

	return (0);
}
