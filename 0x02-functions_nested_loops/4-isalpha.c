#include "main.h"
/**
 * _isalpha - function to check if a letter c is a lower oe upper case
 *  @c: is the letter used for the arguement
 *  Return: 0
 */
int _isalpha(int c)

{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && C <= 'Z'))
	{
		return (1);
	}
	else
		return (0);
}
