#include "main.h"
/**
 *print_alphabet - prints the letters of alphabets in lower case
 * Return:return 1 on success
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
}
