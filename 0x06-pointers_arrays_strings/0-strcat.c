#include 'main.h'
/**
 * _strcat - concatenates two strings
 * @dest: input value
 * @src: input value 
 *
 * Return: void
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	for (j = 0; dest[j] != '\0'; j++)
	{
		/* increment j*/
	}

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[j + i] = src[i];
	}

	dest[i + j] = '\0';
	return (dest);
}
