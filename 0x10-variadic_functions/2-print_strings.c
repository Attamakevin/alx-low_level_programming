#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - prints strings, followed by a new line
 * @separator: string to be printed between strings
 * @n: number of arguements
 * Return: nothing, prints number if separator is not NULL
 **/

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list prints;
	unsigned int i;
	char *str;

	va_start(prints, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(prints, char *);
		if (str == NULL)
		printf("nil");
	else
		printf("%s", str);
	if (i != n - 1 && separator != NULL)
		printf("%s", separator);
	}
	va_end(prints);
	printf("\n");
}
