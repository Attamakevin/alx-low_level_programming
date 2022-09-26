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
	unsigned int i = 0;

	for (; i < n; i++)
	{
		s[i] = b;
	n--;
	}
return (s);
}
