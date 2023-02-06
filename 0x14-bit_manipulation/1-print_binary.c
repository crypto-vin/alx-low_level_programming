#include "main.h"

/**
 * print_binary - print binary
 * @n: integer to manipulate
 */

void print_binary(unsigned long int n)
{
	unsigned long int k = 1;

	k <<= ((sizeof(k) * 8) - 1);
	if (n == 1)
	{
		_putchar('1');
		return;
	}
	if (n == 0)
	{
		_putchar('0');
		return;
		}
	while (k > 0)
	{
		if ((k & n) == 0)
			k = k >> 1;
		else
			break;
	}
	while (k > 0)
	{
		if ((k & n) == 0)
			_putchar('0');
		else
			_putchar('1');
		k = k >> 1;
	}

}
