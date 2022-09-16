#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main - FizzBuzz
 * Description: prints the numbers 1 - 100 w/
 * Fizz for multiples of 3, Buzz for multiples of 5,
 * and FizzBuzz for multiples of both
 * Return: always 0
 */
int main(void)
{
	int i;
	int BUZZ, FIZZ, FIZZBUZZ;

	for (i = 1; i <= 100; i++)
	{
	if (i % 15 == 0)
	printf("FizzBuzz");
	else if (i % 3 == 0)
	printf("Fizz");
	else if (i % 5 == 0)
	printf("Buzz");
	else
	_putchar(i % 10);
	if (i < 100)
	_putchar(' ');
	}
	_putchar('\n');
	return (0);
}
