#include <stdio.h>

/**
 * main - entry point
 * Description: the main program prints
 * all single numbers of base 10 starting from 0
 * Return: Always 0 (success)
 */
int main(void)
{
	int a = '0';

	for (a = '0'; a <= '9'; a++)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
