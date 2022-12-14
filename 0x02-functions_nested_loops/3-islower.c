#include "main.h"

/**
 * _islower - entry point
 *
 * Description: checks for lowercase
 * @c : character to check the case
 *
 * Return: 0 or 1
 */
int _islower(int c)
{

	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
