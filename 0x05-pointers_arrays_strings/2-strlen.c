#include "main.h"

/**
 * _strlen - function
 * @s: pointer to value address
 *
 * Description: returns the length of a string
 *
 * Return: Always 0
 */

int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}
