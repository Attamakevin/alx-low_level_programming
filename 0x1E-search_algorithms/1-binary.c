#include "search_algos.h"
/**
 * binary_search - a function to implement binary search
 * @array: the array to search through
 * @size: the size of the array
 * @value: the element to search for
 * Return: return the index of the value in the array or -1 if not found
 */
int binary_search(int *array, size_t size, int value)
{
size_t start = 0, ending = size - 1, i, mid;

	if (array == NULL)
		return (-1);
	mid = (start + ending) / 2;
	printf("Searching in array: ");
	for (i = 0; i <= ending; i++)
	{
		printf("%i%s", array[i], i == ending ? "\n" : ", ");
	}
	while (start < ending)
	{
		if (array[mid] == value)
		{
			return (mid);
			printf("Found %d at index %ld:\n", value, mid);
		}
		else if (array[mid] < value)
		{
			start = mid + 1;
			printf("Searching in array: ");
			for (i = start; i <= ending; i++)
			{
				printf("%i%s", array[i], i == ending ? "\n" : ", ");
			}
			mid = (start + ending) / 2;
		}
		else if (array[mid] > value)
		{
			start = 0;
			ending = mid - 1;
			printf("Searching in array: ");
			for (i = start; i <= ending; i++)
			{
				printf("%i%s", array[i], i == ending ? "\n" : ", ");
			}
			mid = (start + ending) / 2;
		}
	}
	return (-1);
}
