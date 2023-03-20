#include "main.h"

/**
 * _strcpy - function
 * @src: source
 * @dest: destination
 *
 * Description: copies the string pointed to by src
 * including the terminating null byte (\0) to the buffer
 * pointer to by dest
 *
 * Return: Always 0
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i]; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}
