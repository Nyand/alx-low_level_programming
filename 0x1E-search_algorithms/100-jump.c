#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * jump_search - Searches for a value in a sorted array using Jump search
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in the array
 * @value: Value to search for
 *
 * Return: The index where the value is located, or -1 if not found
 */
int jump_search(int *array, size_t size, int value)
{
	int jump, step, prev, current;

	if (array == NULL || size == 0)
	{
		return (-1);
	}

	jump = (int)sqrt((double)size);
	step = 0;
	prev = current = 0;

	do {
		printf("Value checked array[%d] = [%d]\n", current, array[current]);

		if (array[current] == value)
		{
			return (current);
		}

		step++;
		prev = current;
		current = step * jump;
	} while (current < (int)size && array[current] < value);

	printf("Value found between indexes [%d] and [%d]\n", prev, current);

	for (; prev <= current && prev < (int)size; prev++)
	{
		printf("Value checked array[%d] = [%d]\n", prev, array[prev]);

		if (array[prev] == value)
		{
			return (prev);
		}
	}

	return (-1);
}
