#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints numbers, followed by a new line
 * @n: The number of integers passed to the function.
 * @separator: The string to be printed between numbers.
 * @...: A variable number of numbers to be printed.
 *
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int ind = 0;
	va_list nums;

	va_start(nums, n);

	for (; ind < n; ind++)
	{
		printf("%d", va_arg(nums, int));

		if (ind != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");
	va_end(nums);
}
