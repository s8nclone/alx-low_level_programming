#include "main.h"

/**
 * is_prime - function entry
 * @n: int
 * @res: int
 *
 * Description: checks if all number < n can divide it
 *
 * Return: 0
 */

int is_prime(int n, int res)
{
	if (res >= n && n > 1)
	{
		return (1);
	}
	else if (n % res == 0 || n <= 1)
	{
		return (0);
	}
	else
	{
		return (is_prime(n, res + 1));
	}
}


/**
 * is_prime_number - function name
 * @n: integer
 *
 * Description: returns 1 if input integer is a
 * prime number, otherwise return 0
 *
 * Return: Always 0
 */

int is_prime_number(int n)
{
	return (is_prime(n, 2));
}
