#include "main.h"
/**
*_memcpy - a function that copies n bytes
*from memory area src to memory area dest
*@dest: memory area to copy to
*@src : memory to copy from
*@n: size of byte
*Return: pointer to dest
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
	dest[i] = src[i];
	}
	return (dest);
}
