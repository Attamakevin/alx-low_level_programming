#include "main.h"
/**
 * print_alphabet_x10 - function that prints abc 10 times
 * Return: 0
 */
void print_alphabet_x10(void)
{
	char a, c;

	for (a = 0; a <= 9; a++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
	_putchar('\n');
	}
}
