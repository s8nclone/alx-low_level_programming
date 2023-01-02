#include "main.h"

/**
 * *_memset - function name
 * @s: pointer to constant
 * @b: constant byte
 * @n: max bytes
 *
 * Description: fills memory area with a constant byte
 *
 * Return: pointer to s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
