#include "main.h"

/**
 * check_pal - function entry
 * @s: str
 * @start: move int from right to left
 * @end: move int from left to right
 * @pair: int
 *
 * Description: cecks for palindrome
 *
 * Return: 0 or 1
 */

int check_pal(char *s, int start, int end, int pair)
{
	if ((start == end && pair != 0) || (start == end + 1 && pair == 0))
	{
		return (1);
	}
	else if (s[start] != s[end])
	{
		return (0);
	}
	else
	{
		return (check_pal(s, start + 1, end - 1, pair));
	}
}

/**
 * last_index - function entry
 * @s: pointer to string
 *
 * Description: returns the last index of a string
 *
 * Return: Always 0
 */

int last_index(char *s)
{
	int n = 0;

	if (*s > '\0')
	{
		n += last_index(s + 1) + 1;
	}
	return (n);
}

/**
 * is_palindrome - function name
 * @s: string
 *
 * Description: return 1 if a string is palindrome and 0 if not
 *
 * Return: Always 0
 */

int is_palindrome(char *s)
{
	int end = last_index(s);

	return (check_pal(s, 0, end - 1, end % 2));
}
