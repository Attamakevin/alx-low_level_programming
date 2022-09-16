#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main - FizzBuzz
 * Description: prints the numbers 1 - 100 with
 * Fizz for multiples of 3, Buzz for multiples of 5,
 * and FizzBuzz for multiples of both
 * Return: always 0
 */
int main(void)
{
	int p = 100;
	int i;

	i = 1;
	while (i <= p)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (i % 5 == 0)
		{
			if (i < p)
				printf("Buzz ");
			else
				printf("Buzz");
		}
		else
		{
			printf("%i ", i);
		}
		i++;
	}
	printf("\n");
	return (0);
}
