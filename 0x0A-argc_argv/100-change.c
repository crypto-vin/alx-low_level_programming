#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - main function
 * @argc: argumentc
 * @argv: vector of arguments
 *Return: always 0
 */

int main(int argc, char  *argv[])
{
	int coins = 0;

	if (argc == 2)
	{
		if (strchr(argv[argc - 1], '-'))
		{
			printf("0\n");
			return (1);
		}
		int cash;

		cash = atoi(argv[argc - 1]);

		while (cash > 0)
		{
			if (cash % 25 == 0)
			{
				cash -= 25;
			} else if (cash % 10 == 0)
			{
				cash -= 10;
			} else if (cash % 5 == 0)
			{
				cash -= 5;
			} else if (cash % 2 == 0)
			{
				cash -= 2;
			} else
			{
				cash--;
			}
			coins++;
		}
		printf("%d\n", coins);
		return (0);
	}
	printf("Error\n");
	return (1);
}
