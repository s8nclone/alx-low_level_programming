#include "main.h"

/**
 * wildcmp - function name
 * @s1: variable 1
 * @s2: variable 2
 *
 * Description: compares two strings and returns 1 if
 * the string can be considered identical, otherwise 0
 *
 * Return: Always 0
 */

int wildcmp(char *s1, char *s2)
{
	if (*s1 == *s2 && *s1 != '\0' && *s2 != '\0')
	{
		return (wildcmp(s1 + 1, s2 + 1));
	}
	else if (*s1 == '\0' && *s2 == '\0')
	{
		return (1);
	}

	if (*s2 == '*')
	{
		if (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2))
		{
			return (1);
		}
		else if (*(s1 + 1) != '\0' && *s2 == '\0')
		{
			return (0);
		}
	}
	return (0);
}
