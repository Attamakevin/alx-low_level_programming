#include <stdio.h>
/**
 * main - prints alphabets in lower case and then in upper case
 * Return: always return 0
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		putchar (letter);
	}
	for (letter = 'A'; letter <= 'Z'; letter++)
	{
		putchar (letter);
	}
	putchar ('\n');
	return (0);

}
