#include <stdio.h>
/**
 * main - entry point
 *
 * Return: Always return 0
 *
 */
int main(void)
{
	int c = 0;

	for (; c < 10; c++)
		putchar('0' + c);
	putchar('\n');
	return (0);
}
