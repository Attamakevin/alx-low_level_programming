#include "main.h"
/**
*string_toupper - function to convert lowercase character to uppercase
*@a: input
*Return: upper case
*/
char *string_toupper(char *a)
{
	int i;

	for (i = 0; a[i] != '\0'; i++)
	{
		if (a[i] >= 'a' && a[i] <= 'z')
		{
		a[i] = a[i] - 32;
		}
	}
return (a);
}
