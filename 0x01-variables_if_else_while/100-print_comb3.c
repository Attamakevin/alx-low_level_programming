#include <stdio.h>
/**
 * main - print all possible combinations of two different digits
 * Return: always return 0
 */
int main(void)
{
	int a, b;

	for (a = '0'; a <= '9'; a++)
	{
	for (b = a + 1; b <= '9'; b++)
	{
		if (a != b)
		{
		putchar(a);
		putchar(b);
		putchar(',');
		putchar(' ');
	}
	}
	}
return (0);
}
