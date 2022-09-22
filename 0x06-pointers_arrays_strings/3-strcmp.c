#include "main.h"
/**
*_strcmp - function to compare two strings
*@s1: input
*@s2: input
*Return: return 0 if s1 = s2, return 1 if s1 is
*greater than s2, and -1 is s1 is less than s2
*/
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] != '\0' && s2[i] != '\0')
	i++;
	{
		if (s1[i] != s2[i])
		{
		return (s1[i] - s2[i]);
		}
	i++;
	}
	return (0);
}
