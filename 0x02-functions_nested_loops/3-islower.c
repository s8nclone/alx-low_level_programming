#include "main.h"

/**
 * _islower - entry point
 *
 * Description: checks for lowercase
 *
 * Return: Always 0
 */
int _islower(int c)
{

	if (c >= 'a' && c <= 'z')
	{
		return(1);
	}
	else 
	{
		return(0);
	}
}
