#include <stdio.h>

/**
 * main - entry point
 * Description: the main program prints
 * the lowercase alphabet in reverse
 * Return: Always 0 (success)
 */
int main(void)
{
	char z = 'z';

	for (z = 'z'; z >= 'a'; z--)
	{
		putchar (z);
	}
	putchar ('\n');
	return (0);
}
