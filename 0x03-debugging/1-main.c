#include <stdio.h>
/**
 * main - causes an infinite loop
 * Return: 0
 */
int main(void)
{
	int i;

	printf("Infinite loop incoming :(\n");
	i = 0;
	while (i < 10)
		/**
		 * since i = 0 is always less than 10,
		 *the loop will contiue in infinite loop
		 *the i should be incremented
		 */
	{
		putchar(i)
	}
	printf("Infinite loop avoided! \\o/\n");
	return (0);
}
