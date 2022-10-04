#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
*_strdup - a function  returns a pointer
*to a new string which is a duplicate of the string str
*@str : input parameter
*Return: return a pointer to the duplicate str
*/
char *_strdup(char *str)
{
	char *(duplicate_str);
	int i, len;

	if (str == NULL)
	return (NULL);
	len = 0;
	i = 0;
	while (*(str + i))
	{
		len++;
		i++;
	}
	duplicate_str = malloc(sizeof(char) * len);
	if (duplicate_str == NULL)
		return (NULL);
	i = 0;
	while (i < len)
		{
		*(duplicate_str + i) = *(str + i);
		}
	return (duplicate_str);
}
