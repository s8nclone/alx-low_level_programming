#include "main.h"

/**
 * squarert - function name
 * @n: int to find square root
 * @val: square root
 *
 * Description: find square root
 *
 * Return: int
 */

int squarert(int n, int val)
{
	if (val * val == n)
	{
		return (val);
	}
	else if (val * val < n)
	{
		return (squarert(n, val + 1));
	}
	else if (val + val > n)
	{
		return (squarert(n, val - 1));
	}
	else
	{
		return (-1);
	}
}


/**
 * _sqrt_recursion - function name
 * @n: int
 *
 * Description: return the natural square root of a number
 *
 * Return: Always 0
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (n);
	}
	else
	{
		return (squarert(n, 1));
	}
}
