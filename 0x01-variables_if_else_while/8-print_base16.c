#include <stdio.h>

/**
 * main - entry point
 * Description: the main program prints
 * all the numbers of base 16 in lowercase
 * Return: Always 0 (success)
 */
int main(void)
{
	char i = '0';
	char a = 'a';

	for (i = '0'; i <= '9'; i++)
	{
		putchar (i);
	}
	for (a = 'a'; a <= 'f'; a++)
	{
		putchar (a);
	}
	putchar ('\n');
	return (0);
}
	
