#include"main.h"
/**
* swap_int - a function that swap the value of two integers
* @a : input
* @b : input
* return 0
*/
void swap_int(int *a, int *b)
{
	int m;

	m = *a;
	*a = *b;
	*b = m;
}
