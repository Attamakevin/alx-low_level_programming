#include "main.h"
/**
* print_array - a function that prints elements of n array
* @a : input
* @n : input
* return : 0
*/
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < (n - 1); i++)
	printf("%d, ", a[i]);
	printf("\n");
}
