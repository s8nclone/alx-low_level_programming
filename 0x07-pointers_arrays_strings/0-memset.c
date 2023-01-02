#include "main.h"

/**
 * *_memcpy - function name
 * @s: pointer to constant
 * @b: constant byte
 * @n: max bytes
 *
 * Description: fills memory area with a constant byte
 *
 * Return: pointer to s
 */
char *memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;
	
	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
