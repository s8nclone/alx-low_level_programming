#include "main.h"
#include <stdlib.h>

/**
 * _strlen - function
 * @s: str
 *
 * Description: find length of str
 *
 * Return: Always 0
 */

int _strlen(char *s)
{
	int size = 0;

	for (; s[size] != '\0'; size++)
		;
	return (size);
}


/**
 * *argstostr - function
 * @ac: int
 * @av: args
 *
 * Description: concatenates all the args
 *
 * Return: Always 0
 */

char *argstostr(int ac, char **av)
{
	int i = 0, nc = 0, j = 0, cnt = 0;
	char *s;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (; i < ac; i++, nc++)
		nc += _strlen(av[i]);

	s = malloc(sizeof(char) * nc + 1);
	if (s == 0)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++, cnt++)
			s[cnt] = av[i][j];

		s[cnt] = '\n';
		cnt++;
	}
	s[cnt] = '\0';
	return (s);
}
