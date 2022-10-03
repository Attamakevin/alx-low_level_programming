#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
* create_array - function that creates an array
* @c: array char input
* @size: unsigned size of char input
* Return: return pointer to the array on success
* or NULL on failure
*/
char *create_array(unsigned int size, char c)
{
	char *ar;
	int i = 0;

	if (size <= 0)
	return (NULL);
	ar = malloc(sizeof(char) * size);

		if (ar == NULL)
			return (NULL);
	while (i < size)
	{
		*(ar + i) = c;
		i++;
	}
*(ar + i) == '\0';
return (ar);
}
