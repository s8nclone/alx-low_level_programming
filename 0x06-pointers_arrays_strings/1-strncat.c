#include "main.h"

/**
 * _strncat - function
 *
 * @dest- pointer destination
 * @src: pointer source
 * @n: number of bytes
 *
 * Description: function that concatenates two strings
 *
 * Return: void
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int r = 0;
	int m = 0;

	for (; dest[m];)
	{
		m++;
	}

	while (r < n && src[r])
	{
		dest[m + i] = src[r];
		i++;
		r++;
	}
	return (dest);
}
