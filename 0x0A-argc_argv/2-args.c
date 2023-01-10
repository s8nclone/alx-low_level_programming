#include <stdio.h>

/**
 * main - function
 * @argc: int
 * @argv: list
 *
 * Description: prints all arguments it receives
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int i = 0;

	if (argc--)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
