#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - Print diagonal sum.
 * @a: an array of pointers of integers
 * @size: array size
 */
void print_diagsums(int *a, int size)
{
	int i, j, k, m, n;

	k = 0;
	m = 0;
	n = 0;
	for (i = 0; i < size; i++)
		for (j = 0; j < size; j++)
		{
			(i == j) ? m += a[k] : 0;
			(i + j == size - 1) ? n += a[k] : 0;
			k++;
		}
	printf("%i, %i\n", m, n);
}
