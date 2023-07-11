#include "search_algos.h"
/**
 * linear_search - a function to implement linear search
 * @array: the array to search through
 * @size: the size of the array
 * @value: the value to search for
 * Return: the index of the value in the array or -1 if not found
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;
	int found = 0;

	if (array == NULL)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		if (array[i] == value)
		{
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
			return (i);
			printf("Found %d at index %ld\n", value, i);
			found = 1;
			break;
		}
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
	}
	if (found == 0)
	{
		return (-1);
	}
	return (0);
}

