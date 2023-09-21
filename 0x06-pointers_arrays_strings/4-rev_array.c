#include "main.h"

/**
 * _swap - swaps the values of two integers
 * @a: pointer to an integer
 * @b: pointer to an integer
 */
static void _swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

/**
 * reverse_array - reverses the content of an array of integers
 * @a: array of integers
 * @n: number of elements in the array
 */
void reverse_array(int *a, int n)
{
	int i, j;

	for (i = 0, j = n - 1; i < j; i++, j--)
		_swap(&a[i], &a[j]);
}
