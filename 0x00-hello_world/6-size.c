#include <stdio.h>

/**
 *  * main - print sizes
 *    * Return: Always 0 (Success)
 */
int main(void)

{

	printf("The size of an int is:%lu.\n", (unsigned long)sizeof(int));
	printf("The size of long int is: %lu.\n", (unsigned long)sizeof(long int));
	printf("The size of char is: %lu.\n", (unsigned long)sizeof(char));
	printf("The size of float is: %lu.\n", (unsigned long)sizeof(float));
	printf("The size of long long is: %lu.\n", (unsigned long)sizeof(long long int));

	return (0);
}
