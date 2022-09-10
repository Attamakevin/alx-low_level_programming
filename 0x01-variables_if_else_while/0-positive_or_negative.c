#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *main - Determine if a random number is positive, negative or zero.
 *main - Always return zero
 *main - prints the random number as positive or negative or zero.
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	/* your code goes there */
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	else
		printf("%d is zero\n", n);

	return	(0);
}

