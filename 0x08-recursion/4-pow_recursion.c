#include "main.h"

/**
 * _pow_recursion - function name
 * @x: int
 * @y: power of int
 *
 * Description: return the value of x raised to power of y
 *
 * Return: Always 0
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else if (y == 1)
	{
		return (x);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
