#include "main.h"
/**
*_memset -  function fills the first n bytes of the memory area pointed to
* @s: pointer to memory
* @b: constant value
* @n: number of bytes to be filled
* Return: return memory area s
*/
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	if (n > 0)
	{
	for (i = 0; i < n; i++)
		*s = b;
	}
	return (s);
}
