#include <stdio.h>
#include "main.h"
/**
 * main - function print number of arguments passed to program
 * @arg: arguement
 * @argc: integer counter
 * Return: 0 on success
 */
int main(int argc, char *arg[]__attribute__((unused)))
{
	if (argc > 0)
	printf("%d\n", argc - 1);
return (0);
}

