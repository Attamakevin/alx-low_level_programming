#include "function_pointers.h"



/**
 * array_iterator - executes a function on each element of array.
 * @array: to be iterated and execute a function for each of its elements
 * @size: size of the array
 * @action: pointer to function to be executed
 * Return: void.
*/
void array_iterator(int *array, size_t size, void (*action)(int))

{

	unsigned int i;



	if (array != NULL && action != NULL)

	{

		for (i = 0; i < size; i++)

		{

			action(array[i]);

		}

	}

}
