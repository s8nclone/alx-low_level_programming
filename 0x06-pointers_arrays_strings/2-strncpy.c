#include "main.h"

/**
 * _strncpy - function entry
 * @dest: pointer to destination
 * @src: pointer to input string
 * @n: length of string
 *
 * Description: copies a string
 *
 * Return: resulting string
 */
char *strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && *(src + i); i++)
	{
		*(dest + i) = *(src + i);
	}
	for (; i < n; i++)
	{
		*(dest + i) = '\0';
	}
	return (dest);
}
