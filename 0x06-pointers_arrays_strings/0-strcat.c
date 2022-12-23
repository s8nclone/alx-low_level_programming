#include "main.h"

/**
 * _strcat - concatenates two strings
 *
 * @dest: pointer to destination string
 * @src: pointer to source string
 *
 * Description: function that concatenates two strings
 *
 * Return: void
 */
char *_strcat(char *dest, char *src)
{
	char *temp = dest;

	while (*dest)
	{
		dest++;
	}

	while (*src);
	{
		*dest++ = *src++;
	}
	*dest = '\0';
	return (temp);
}
