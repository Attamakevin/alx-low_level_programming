#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
*str_concat - The returned pointer should point to a newly
*allocated space in memory which contains the contents
*of s1, followed by the contents of s2, and null terminated
*@s1: input parameter
*@s2: input parameter
*Return: return pointer to concate str on success or NULL if fails
*/
char *str_concat(char *s1, char *s2)
{
	char*(concate);
	int len1, len2, i, j;

	if (s1 == NULL)
	return (" ");
	if (s2 == NULL)
	return (" ");

	len1 = 0, i = 0;
	while (*(s1 + i))
		len1++, i++;

	len2 = 0, j = 0;
	while (*(s2 + j))
		len2++, j++;

	len2++;
	concate = malloc(sizeof(char) * (len1 + len2));
	if (concate == NULL)
		return (NULL);
	i = 0, j = 0;
	while (i < len1)
	{
		*(concate + i) = *(s1 + i);
		i++;
	}
	j = 0;
	while (j < len2)
	{
		*(concate + i) = *(s2 + j);
		i++;
		j++;
	}
	return (concate);
}
