#include "main.h"
#include <stdlib.h>

/**
 * _strlen - function
 * @s: str
 *
 * Description: find lenght of str
 *
 * Return: Always 0
 */

int _strlen(char *s)
{
	int size = 0;

	for (; s[size] != '\0'; size++)
		;
	return (size);
}


/**
 * *str_concat - function name
 * @s1: str 1
 * @s2: str 2
 *
 * Description: concatenates two strings
 *
 * Return: pointer
 */

char *str_concat(char *s1, char *s2)
{
	int size1, size2, i;
	char *ma;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	size1 = _strlen(s1);
	size2 = _strlen(s2);
	ma = malloc((size1 + size2) * sizeof(char) + 1);
	if (ma == NULL)
		return (NULL);

	for (i = 0; i <= size1 + size2; i++)
	{
		if (i < size1)
			ma[i] = s1[i];
		else
			ma[i] = s2[i - size1];
	}
	ma[i] = '\0';
	return (ma);
}
