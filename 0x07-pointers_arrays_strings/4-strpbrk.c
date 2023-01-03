#include "main.h"
#define NULL 0

/**
 * *_strpbrk - function name
 * @s: pointer to string
 * @accept: pointer to byte
 *
 * Description: searces a string for any of a set of bytes
 *
 * Return: pointer to the byte in s or NULL
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (accept[i] == *s)
			{
				return (s);
			}
		}
		s++;
	}
	return (NULL);
}
