#include <stdio.h>

/**
 * main - entry point
 *
 * Return: Always return 0
 *
 */
int main(void)
{
	unsigned char c = '0';
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
		putchar('0' + c);
		c ++;
	}
	c = '1';
	for (j = 0; j < 6; j++)
	{
		putchar('0' + c);
		c++;
	}
	putchar('\n');
	return (0);
}
