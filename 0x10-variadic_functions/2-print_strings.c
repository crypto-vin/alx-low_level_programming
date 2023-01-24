#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - prints strings followed by a new line
 * @separator: The string to be printed in between strings
 * @n: number of strings passed to the function
 * @... : variable number of strings to be printed
 *
 * Description: If separator is NULL, it is not printed.
 * If one of the strings if NULL, (nil) is printed instead.
 *
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	char *str;
	unsigned int ind = 0;

	va_start(strings, n);

	for (; ind < n; ind++)
	{
		str = va_arg(strings, char *);

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		if (ind != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");
	va_end(strings);
}
