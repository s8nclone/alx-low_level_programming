#include "main.h"

/**
 * _strcmp - function entry declaration
 * @s1: character to print
 * @s2: second string
 *
 * Description: function that compares two strings
 *
 * Return: 1 if true, 0 if false
 */
int _strcmp(char *s1, char *s2)
{
	int n = 0;

	while (s1[n] == s2[n] && s1[n] && s2[n])
	{
		n++;
	}

	return (s1[n] - s2[n]);
}
