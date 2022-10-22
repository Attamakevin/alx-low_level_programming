#include <stdio.h>
void printbeforemain(void)_attribute_ ((constructor));
/**
* printbeforemain - a function to print lines before main
* return: void
*/
 void printbeforemain(void)
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
