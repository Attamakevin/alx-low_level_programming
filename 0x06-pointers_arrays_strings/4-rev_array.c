#include "main.h"
/**
*reverse_array - function to reverse an array of integers
*@a: input
*@n: number of line
*return: 0
*/
void reverse_array(int *a, int n)
{
	int i, j, c;

	i = 0;
	while  (j = n - 1 && i < j)
	{
	 i++;
	 j--;
		a[i] = c;
		a[i] = a[j];
		a[j] = c;
	}
}
