#include <stdio.h>
/**
 * swap_int - swaps the values of two integers
 * @a: pointer for a
 * @b: pointer for b
 *
 * Returns: void
 */
void swap_int(int *a, int *b)
{
	*a = &b;
	*b = &a;
}
