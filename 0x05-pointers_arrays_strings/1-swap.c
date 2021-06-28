#include "holberton.h"

/**
 * swap_int - a function that swaps the values of two integers.
 * @a: pointer input.
 * @b: pointer input.
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
