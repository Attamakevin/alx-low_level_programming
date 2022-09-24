#include "main.h"
/**
*print_number - function to print integers
*@n: input
*Return:o
*/
void print_number(int n)
{
	unsigned int  num = n;

	if (n < 0)
	{
	_putchar('-');
	num = (-n);
	}
	else if (n >= 0 && n < 10)
	{
	_putchar('0' +  n);
	}
	else if (n >= 10)
	{
	print_number(num / 10)
	}
	_putchar((num % 10) + '0');
}
