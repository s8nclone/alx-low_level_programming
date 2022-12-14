#include "main.h"
#define NULL 0

/**
 * *_strchr - function name
 * @s: pointer to string
 * @c: character to check
 *
 * Description: locates a character in a string
 *
 * Return: pointer to character
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (!c ? s : NULL);
}
