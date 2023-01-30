#include <stdio.h>

/**
 * main - prints name of complilation file
 * followed by a new line
 *
 * Return: 0
 */

int main(void)
{
	printf("%s\n", __BASE_FILE__);
	return (0);
}
