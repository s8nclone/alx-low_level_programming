#include <stdio.h>

/**
 * main - function
 * @argc: int
 * @argc: list
 *
 * Description: prints the number of arguments passed
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
/* to suppress unused varaible warning */
	argv = argv;
	printf("%s\n", argc - 1);
	return (0);
}
