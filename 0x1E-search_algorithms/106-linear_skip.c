#include "search_algos.h"

/**
 * linear_skip - searches for a value in a skip list
 *
 * @list: input list
 * @value: value to search in
 * Return: index of the number
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *now;

	if (list == NULL)
		return (NULL);

	now = list;

	do {
		list = now;
		now = now->express;
		printf("Value checked at index ");
		printf("[%d] = [%d]\n", (int)now->index, now->n);
	} while (now->express && now->n < value);

	if (now->express == NULL)
	{
		list = now;
		while (now->next)
			now = now->next;
	}

	printf("Value found between indexes ");
	printf("[%d] and [%d]\n", (int)list->index, (int)now->index);

	while (list != now->next)
	{
		printf("Value checked at index [%d] = [%d]\n", (int)list->index, list->n);
		if (list->n == value)
			return (list);
		list = list->next;
	}

	return (NULL);
}
