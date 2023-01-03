#include "main.h"

/**
 * _strpbrk - Entry Point
 * @s: keyed input
 * @accept: secondary input
 *
 * Return: If success, 0
 *
 */
char *_strpbrk(char *s, char *accept)
{
	int m = 0;

	while (*s)
	{
		for (; accept[m]; m++)
		{
			if (*s == accept[m])
				return (s);
		}
		s++;
	}
	return ('\0');
}
