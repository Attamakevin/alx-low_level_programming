#include "main.h"
/**
 * _isdigit - function checks for 0 through 9 and
 * @c : is the parameter for testing the arguement
 * Return: return 1 on success and 0 if it fail
 */
int _isdigit(int c)
{
	if (c == '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

