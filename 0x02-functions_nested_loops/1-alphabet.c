#include <stdio.h>
#include "main.h"
/*declaring the function print alphabet)*/
void print_alphabet(void);
/**
 * main - prints the letters of alphabets in lower case
 * Return:return ch
 */
int main(void)
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
