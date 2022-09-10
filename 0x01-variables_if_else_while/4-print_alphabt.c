#include <stdio.h>
/**
 * main - print alphabets in lower case without ptinting q and e
 * Return: always return 0
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z';  letter++)
		if (letter != 'e' && letter != 'q')
		{
		putchar (letter);
		}
	putchar ('\n');
	return (0);
}
