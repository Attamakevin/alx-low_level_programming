#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - sum of all its parameters
 * @n: number of arguements
 * Return: sum of all parameters or 0
 **/
int sum_them_all(const unsigned int n, ...)
{
	va_list arg;
	int i;
	int sum;
	if (n == 0)
		return (0);
	va_start(arg, n);
	for (i = 0; i < arg; i++)
	{
		sum += va_arg(sum, unsigned int);
	}
	va_end(arg);
	return (sum);
}

