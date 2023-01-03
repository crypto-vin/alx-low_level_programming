#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to be printed
 *
 * Return: if success, 1
 * if error, -1 and errno is set accordingly
 *
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
