#include "main.h"
/**
*print_number - function to print integers
*@n: input
*Return:o
*/
void print_number(int n)
{
	int m;

	while (m != 0)
	if (m < 0)
	{
	n = n * m;
	_putchar(n);
	}
	else
	{
	_putchar(n % 10 + '0');
	}
}
