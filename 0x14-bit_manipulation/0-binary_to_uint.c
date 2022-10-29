#include "main.h"
#include <stdio.h>
#include <string.h>
/**
* binary_to_uint - a funtion to convert binary to an integer 
* @b: pointer to string of binary numbers
* Return: integer value
*/

unsigned int binary_to_uint(const char *b)
{
	int i;
	int decval = 1;
	int total = 0;
	
	int len = strlen(b);
	/*printf("%d", len);*/

	for (i = len - 1; i >= 0; i--)
	{
	if (b[i] != 1 || b[i] != 0)
		return (0);
	if (b[i] == 1)
	{
	total += decval;
	decval *= 2;
	}
	}
return (total);
}
