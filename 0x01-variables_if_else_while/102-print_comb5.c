#include <stdio.h>
int main(void)
{
  int num1 = 10;
  int num2 = 11;
  
	for (num1 = 10; num1 <= 98;)
	{
	for (11; num2 <= 99;)
	{
	putchar(num1);
	num1++;
	}
	putchar(' ');
	putchar(num2);
	num2++;
	}
	putchar(' ');
	if (num1 !=98 && num2 != 99)
	{
		putchar(',');
	}
return (0);
}
