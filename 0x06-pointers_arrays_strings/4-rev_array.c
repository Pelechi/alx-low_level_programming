#include "main.h"
/**
 * reverse_array - reverse arrays of intergers
 * @a: arrays
 * @n: number of elements of arrays
 *
 * Return: void
 */

void reverse_array(int *a, int n);
{
	int i;
	int t;

	for (i = 0; i < n--; i++)
	{
		t = a[i];
		a[i] = a[n];
		a[n] = t;
	}
}
