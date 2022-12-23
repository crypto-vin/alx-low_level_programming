#include "main.h"

/**
 * reverse_array - reverses an array
 * @a: array to reverse
 * @n: size of array
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int t = 0;

	for (i = 0; i < n--; i++)
	{
		t = a[i];
		a[i] = a[n];
		a[n] = t;
	}
}
