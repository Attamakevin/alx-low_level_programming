#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints numbers, followed by a new line
 * @separator: string to be printed between numbers
 * @n: number of arguements
 * Return: nothing, prints number if separator is not NULL
 **/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list prints;
	unsigned int i;
	
	va_start(prints, unsigned int n);
	for (i = 0; i < n; i++)
	{
	printf("%d\n", va_arg(prints, int));
	if (i != n - 1 && seperator != NULL)
	printf("%s\n", seperator);
	}
	va_end(prints);
printf("\n");
}
