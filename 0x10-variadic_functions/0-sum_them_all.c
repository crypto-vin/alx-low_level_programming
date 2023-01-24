#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - sums up all the gien arguments
 *
 * @n: number of integers to be summed up
 * @...: variable number of parameters to be summed up
 *
 * Return: sum, 0 if n == 0
 *
 */

int sum_them_all(const unsigned int n, ...)


{
	unsigned int i, sum = 0;
	va_list ap;

	va_start(ap, n);

	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);

	va_end(ap);

	return (sum);
}
