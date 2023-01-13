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
	unsigned int i, j;

	/* check if the string passed NULL */
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
		;

	str = malloc(sizeof(char) * (i + n + 1));
	if (str == NULL)
	{
		return (NULL);
	}

	for (i = 0; s1[i] != '\0'; i++)
		str[i] = s1[i];
	for (j = 0; j < n && s2[j] != '\0'; j++)
	{
		str[i] = s2[j];
		i++;
	}

	str[i] = '\0';
	return (str);
}
