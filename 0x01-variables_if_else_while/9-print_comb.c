#include <stdio.h>
/**
 * main - prints all posibble combination of single digit numbers
 * in ascending order
 * Return: always return 0
 */
int main(void)
{
	int num;

	for (num = 0; num <= 9; num++)

	{
	putchar((num % 10) + '0');
	if (num == 9)
		continue;
	putchar(',');
	putchar(' ');
	}
putchar('\n');
return (0);
}
