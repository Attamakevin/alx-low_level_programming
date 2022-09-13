#include "main.h"
/**
 *function - prints the letters of alphabets in lower case
 * Return:return ch
 */
void print_alphabet(void);
{
	char ch = 'a';

	for (ch = 'a'; ch <= 'z';)
	{
	putchar(ch);
	ch++;
	}
	putchar('\n');
	return (ch);
}
