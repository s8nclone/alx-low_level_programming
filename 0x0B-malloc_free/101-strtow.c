#include "main.h"
#include <stdlib.h>

/**
 * wrdcount - function
 * @s: str
 *
 * Description: counts te number of words in str
 *
 * Return: Always 0
 */

int wrdcount(char *s)
{
	int i, n = 0;

	for (i = 0; s[i]; i++)
	{
		if (s[i] == ' ')
		{
			if (s[i + 1] != ' ' && s[i + 1] != '\0')
				n++;
		}
		else if (i == 0)
			n++;
	}
	n++;
	return (n);
}


/**
 * strtow - function name
 * @str: string to split
 *
 * Description: splits a string into words
 *
 * Return: pointer to an array of strins
 */

char **strtow(char *str)
{
	int i, j, k, l, n = 0, wc = 0;
	char **wd;

	if (str == NULL || *str == '\0')
		return (NULL);
	n = wrdcount(str);
	if (n == 1)
		return (NULL);
	wd = (char **)malloc(n * sizeof(char *));
	if (wd == NULL)
		return (NULL);
	wd[n - 1] = NULL;
	i = 0;
	while (str[i])
	{
		if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
		{
			for (j = 1; str[i + j] != ' ' && str[i + j]; j++)
				;
			j++;
			wd[wc] = (char *)malloc(j * sizeof(char));
			j--;
			if (wd[wc] == NULL)
			{
				for (k = 0; k < wc; k++)
					free(wd[k]);
				free(wd[n - 1]);
				free(wd);
				return (NULL);
			}
			for (l = 0; l < j; l++)
				wd[wc][l] = str[i + l];
			wd[wc][l] = '\0';
			wc++;
			i += j;
		}
		else
			i++;
	}
	return (wd);
}
