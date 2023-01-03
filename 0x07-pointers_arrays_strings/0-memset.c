#include "main.h"

/**
 * _memset - fills a memory block with a specific value
 * @s: Begining address of the memory to be filled
 * @b: desired value
 * @n: amount of bytes to be changed
 *
 * Return: altered array with new values for n bytes
 *
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; n > 0; i++)
	{
		s[i] = b;
		n--;
	}

	return (s);
}
