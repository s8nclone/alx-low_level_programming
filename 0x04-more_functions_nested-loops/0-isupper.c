#include "main.h"

/**
 * _isupper - check code
 *
 * Description: checks for uppercase letters
 *
 * Return: Always 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
