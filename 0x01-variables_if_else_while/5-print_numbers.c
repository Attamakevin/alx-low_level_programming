#include <stdio.h>
/**
 * main - print all single digits of base 10 starting from 0
 * Return: always return 0
 */
int main(void)
{
	int num;
	for (num = 0; num < 10; num++)
		printf("%d", num);

	printf("\n");
	return (0);
}
