#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - function name
 * @s1: first string
 * @s2: second string
 * @n: max number of bytes of s2 to concat to s1
 *
 * Description: concatenates two str
 *
 * Return: pointer to concat space in mem or NULL
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int i, j, len = n;

	/* check if the string passed NULL */
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
		len++;

	str = malloc(sizeof(char) * (len + 1));
	if (str == NULL)
	{
		return (NULL);
	}
	len = 0;
	for (i = 0; s1[i] != '\0'; i++)
		str[len++] = s1[i];
	for (i = 0; i < n && s2[i] != '\0'; i++)
		str[len++] = s2[i];

	str[len] = '\0';
	return (str);
}
