#include "search_algos.h"
/**
 * linear_search - searches for a value in an array of
 * integers using the Linear search algorithm
 * @array: a pointer to the first element of the array to search in.
 * @size: number of elements in array
 * @value:  the value to search for
 * Return: -1 if the value not in array or NULL, otherwise
 * first index of location.
 */
int linear_search(int *array, size_t size, int value)
{
	int i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < (int)size; i++)
	{
		printf("Value checked array[%u] = [%d]\n", i, array[i]);
		if (value == array[i])
			return (i);
	}
	return (-1);
}
