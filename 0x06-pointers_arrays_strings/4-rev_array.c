#include "holberton.h"

/**
 * reverse_array -  a function that reverses.
 * @a: - input pointer.
 * @n: - integer input.
*/

void reverse_array(int *a, int n)
{
	int counter = 0, counter2 = 0, b[n];

	for (; counter < n; counter++)
	{
		b[counter] = a[counter];
	}
	for (; counter2 < n; counter2++)
	{
		a[counter2] = b[counter - 1];
		counter--;
	}
}
