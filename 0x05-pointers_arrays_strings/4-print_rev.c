#include "main.h"
/**
* print_rev - a function that prints string in reverse form
* @s : input
* return: return 0
*/
void print_rev(char *s)
{
	while (*s != '\0' && *s >= 0)
	_putchar(*s--);
	_putchar('\n');
}
