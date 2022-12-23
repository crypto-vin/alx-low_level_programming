#include "main.h"

/**
 * _strncat - concat two strings
 *
 * @dest: concat destination
 * @src: source concat array
 * @n: number of times to append
 *
 * Return: char value
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest)
}
