#include "search_algos.h"
/**
 * linear_search - uses liner search algorithm to find an element
 * @array: the array to look into
 * @value: the value being looked for
 * @size: size of the array
 * Return: index of the value
 * else -1
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (!value || array == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);

		if (array[i] == value)
			return (i);
	}
	return (-1);
}
