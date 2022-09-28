#include "main.h"
/**
* _pow_recursion - function to return value of x raised to power y
* @x: integer input
* @y: integer input
* Return: return x raise to power y
*/
int _pow_recursion(int x, int y)
{
	if (y < 0)
	return (-1);
	else if (x == 0)
	return (0);
	else if (x == 1 || y == 0)
	return (1);
	else
	return (y * _pow_recursion(x, y - 1));
}
