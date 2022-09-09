#include <stdio.h>

/**
 *  * main - print sizes
 *    * Return: Always 0 (Success)
 */
int main(void)

{
	int i;

	long l;

	char c;

	float f;

	printf("The size of an int is:%lu.\n", (unsigned long)sizeof(i));
	printf("The size of long int is: %lu.\n", (unsigned long)sizeof(l));
	printf("The size of char is: %lu.\n", (unsigned long)sizeof(c));
	printf("The size of float is: %lu.\n", (unsigned long)sizeof(f));

	return (0);
}
