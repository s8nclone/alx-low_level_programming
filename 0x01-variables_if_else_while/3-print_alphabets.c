#include <stdio.h>

/**
 * main - entry point
 * Description: the main program prints
 * the alphabet in lowercase and uppercase
 * Return: Always 0 (success)
 */
int main(void)
{
	char a = 'a';
	char z = 'A';

	for (a = 'a'; a <= 'z'; a++)
	{
		putchar(a);
	}
	for (z = 'A'; z <= 'Z'; z++)
	{
		putchar(z);
	}
	putchar('\n');
	return (0);
}
