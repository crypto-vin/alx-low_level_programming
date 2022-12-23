#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strncat - concatenate two strings
 * @dest: concat destination
 * @src: source array to concat
 * @n: number of times to append
 *
 * Return: char value
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, int j = 0;

	while (dest[i++])
		j++;

	for (i = 0; src[i] && i < n; i++)
		dest[j++] = src[i];

	return (dest);

}
