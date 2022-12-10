#include <stdio.h>

/**
 * main - entry point
 * Description: the main program prints
 * the alphabet in lowercase except letters 'q' and 'e'
 * Return: Always 0 (success)
 */
int main(void)
{
	char a = 'a';

	for (a = 'a'; a <= 'z'; a++)
	{
		if ((a != 'e') && (a != 'q'))
		{
			putchar (a);
		}
	}
	putchar('\n');
	return (0);
}
