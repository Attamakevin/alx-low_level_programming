#include <stdio.h>
/**
 * main - print all possible combinations of two digts numbers
 * Return: always return 0
 */
int main(void)
{
	int num1 = 10;
	int num2 = 11;

	while (num1 < 99 && num2 <= 99)
	{
	putchar((num1 % 10) + '0');
	num1++;
	putchar((num2 % 10) + '0');
	num2++;
	putchar(' ');
	putchar(',');
	}
	while (num1 < 98 && num2 < 99)
	{
	continue;
	}
	putchar('\n');
return (0);
}
