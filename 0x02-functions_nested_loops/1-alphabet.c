#include "main.h"
/**
 *function - prints the letters of alphabets in lower case
 * Return:return ch
 */
void print_alphabet(void)
{
	char ch = 'a';

	for (ch = 'a'; ch <= 'z';)
	{
	_putchar(ch);
	ch++;
	}
	_putchar('\n');
	return (0);
}
