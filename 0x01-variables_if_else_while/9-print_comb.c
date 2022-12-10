#include <stdio.h>

/**
 * main - entry point
 * Description: the main program prints
 * all possible combinations of single-digit numbers
 * Return: Always 0 (success)
 */
int main(void)
{
	int c;

	for (c = 48; c <= 57; c++)
	{
		putchar(c);
		if (c != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
