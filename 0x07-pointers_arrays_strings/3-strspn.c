#include "main.h"

/**
 * _strspn - function name
 * @s: pointer to string
 * @accept: pointer to character to print
 *
 * Description: gets the length of a prefix substring
 *
 * Return: number of bytes in string
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != s[i]; j++)
		{
			if (accept[j] == '\0')
			{
				return (i);
			}
		}
	}
	return (i);
}
