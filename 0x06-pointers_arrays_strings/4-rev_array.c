#include "main.h"
/**
*reverse_array - function to reverse an array of integers
*@a: input
*@n: number of line
*return: 0
*/
void reverse_array(int *a, int n)
{
	int i, c;

	for (i = 0; i < n--; i++)
	{
		c = a[i];
		a[i] = a[n];
		a[n] = c;
	}
}
