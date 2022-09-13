#include "main.h"
/**
 * void print_alphabet_x10(void)- prints the letters of alphabets 
 * 10 times
 * return 0 on success
 */
void print_alphabet_x10(void)
{
	char a,c;
	for (a = 0; a <= 9;a++)
	{
		for (c = 'a'; c <='z'; c++)
		{ 
			_putchar(c);
		}
	_putchar('\n');
	}
}
