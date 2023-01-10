#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _intcheck - function
 * @n: char to check
 *
 * Description: checks if a character is int
 *
 * Return: Always 0
 */

int _intcheck(char *n)
{
	int i, num, len;

	i = 0;
	num = 0;
	len = strlen(n);
	while (i < len)
	{
		if (n[i] < '0' || n[i] > '9')
		{
			return (-1);
		}
		else
		{
			num = num * 10 + (n[i] - '0');
		}
		i++;
	}
	return (num);
}


/**
 * main - function
 * @argc: int
 * @argv: list
 *
 * Description: adds positive numbers
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int a, b, sum;

	sum = 0;
	for (a = 1; a < argc; a++)
	{
		b = _intcheck(argv[a]);
		if (b == -1)
		{
			printf("Error\n");
			return (1);
		}
		sum += b;
	}
	printf("%d\n", sum);
	return (0);
}
