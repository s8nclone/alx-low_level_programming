#include <stdio.h>

/**
 * main - entry point
 * Description: main program prints
 * the alphabet in lower case
 * Return: Always 0 (success)
 */
int main(void)
{
	char a = 'a';

	for (a = 'a'; a <= 'z'; a++)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
