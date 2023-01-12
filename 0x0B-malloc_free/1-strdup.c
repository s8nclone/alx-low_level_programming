#include "main.h"
#include <stdlib.h>

/**
 * *_strdup - function name
 * @str: string to copy
 *
 * Description: returns a pointer to a newly allocated
 * space with the copy of str
 *
 * Return: pointer to array or null
 */

char *_strdup(char *str)
{
	char *m;
	int i, j;

	if (str == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	i++;
	m = malloc(sizeof(*str) * i);
	if (m == NULL)
	{
		return (NULL);
	}
	j = 0;
	while (str[j] != '\0')
	{
		m[j] = str[j];
		j++;
	}
	return (m);
}
