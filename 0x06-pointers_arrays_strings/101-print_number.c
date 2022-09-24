#include "main.h"
/**
*print_number - function to print integers
*@n: input
*Return:o
*/
void print_number(int n)
{
	int m = n;

	if (m < 0)
	{
	_putchar(-m);
	}
	else if (m > 0)
	{
	_putchar(m);
	}
	else
	{
	_putchar(m % 10 + '0');
	}
}
