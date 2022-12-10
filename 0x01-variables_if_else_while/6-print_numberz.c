#include <stdio.h>

/**
 * main - entry point
 * Description: the main program prints
 * all single digit numbers of base 10 starting from 0
 * Return: Always 0 (sucess)
 */
int main(void)
{
	int i = '0';

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
