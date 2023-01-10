#include <stdio.h>
#include <stdlib.h>

/**
 * main - function
 * @argc: int
 * @argv: list
 *
 * Description: multiplies two numbers
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int a, b, res;

	if (argc <= 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
/* atoi converts string to int */
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		res = a * b;
		printf("%d\n", res);
	}
	return (0);
}
