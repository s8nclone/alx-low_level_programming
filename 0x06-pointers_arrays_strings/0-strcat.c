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
char *_strcat(char *dest, char *src);
{
	int length, i;

	length = 0;
	while (dest[length] != '\0')
	{
		length++;
	}
	for (i = 0; src[i] != '\0'; i++, length++);
	{
		dest[length] = src[i];
	}

	dest[length] = '\0';
	return (dest);
}
