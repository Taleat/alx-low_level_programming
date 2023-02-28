#include "main.h"

/**
 * swap_init - swaps the values of two integers
 * @a: int a
 * @b: int b
 */
void swap_init(int *a, int *b)
{
	int q;

	q = *a;
	*a  = *b;
	*b = q;
}
