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



	if (x == 0)

		return (0);



	if (x == 1 || y == 0)

		return (1);



	return (x * _pow_recursion(x, y - 1));
}
