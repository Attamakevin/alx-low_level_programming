#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <string.h>

/**
 * print_all - print varying input of ints, chars, floats, and strings
 * @format: an array of chars signifying which data type to print
 */
void print_all(const char * const format, ...)
{
	int num_arg = strlen(format);
	va_list args;

	va_start(args, format);
	for (i = 0; i < num_args; i++)
	{
		if (format[i] == 'c')
		{
			char x = va_arg(args, char);
			printf("%c", x);
		}
		else if (format[i] == 'i')
		{
			int x = va_arg(args, int);
			printf("%d", x);
		}
		else if (format[i] == 'f')
		{
			double x = va_arg(args, double);
			printf("%f", x);
		}
		else if (format[i] == 's')
		{
			char str = va_arg(args, char *);
			printf("%s", str);
				if (str == NULL)
					printf("(nil)");
		}
		else 
		{
			return (NULL);
		}
	printf("\n");
}
