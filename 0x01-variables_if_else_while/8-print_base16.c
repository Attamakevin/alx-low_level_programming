#include <stdio.h>
/**
 * main - prints all the numbers of base 16 in lower case
 * Return: always return 0
 */
int main(void)
{
	int num;

	for (num = '0'; num <= '9'; num++)
		putchar(num);

	putchar('\n');
	return (0);
}
