#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
* main - function prints multiplication of two numbers
* @argc: argument counter
* @argv: numbers to multiply
* Return: return 0 on success, and 1 if numbers are less
* than two
*/
int main(int argc, char *argv[])
{
	if (argc < 2)
	{
	printf("error\n");
	return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
