#include "main.h"
/**
* _strcpy - function that copy pointed t
* @src : copy from
* @dest : copy to
* Return: dest
*/
char *_strcpy(char *dest, char *src)
{
	int i;
	int n = 0;

	for (i = 0; i < n; n++)
	{
	if (src[i] != '\0')
		i++;
	}
	for (; i < n; i++)
	{
	dest[i] = src[i];
	dest[i] = '\0';
	}
return (dest);
}
