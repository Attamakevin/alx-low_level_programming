#include<stdio.h>
/**
 * main - prints all possible different combination of 3 digits
 * Return: always return 0
 */
int main(void)
{
	int a,b,c;

	for (a = '0'; a < '8'; a++)
		for (b = a + 1; b < '9'; b++)
			for (c = b + 1; c <= '9'; c++)
	{
	if (a != b && b != c && a != c)
	putchar(a);
	putchar(b);
	putchar(c);
	if (a == 7 && b == 8 && c == 9)
		continue;
	putchar(',');
	putchar(' ');
	}
	putchar('\n');
return (0);
}
