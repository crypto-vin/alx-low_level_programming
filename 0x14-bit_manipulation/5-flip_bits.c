#include "main.h"

/**
 * flip_bits - flips bits needed from one number to another
 * @n: first number
 * @m: second number
 *
 * Return: unsigned int value of number
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int bit_flips, count = 0;

	bit_flips = n ^ m;
	while (bit_flips > 0)
	{
		count += bit_flips & 1;
		bit_flips >>= 1;
	}
	return (count);
}
