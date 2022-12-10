#include <stdio.h>

/**
 * main - entry point
 * Description: the main program prints
 * all possible different combinations of three digits
 * Return: Always 0
 */
int main(void)
{
	int c = 0;
	int fd;
	int md;
	int ld;

	while (c <= 999)
	{
		fd = (c / 100 + '0');
		md = (c / 10 % 10 + '0');
		ld = (c % 10 + '0');

		if ((fd < md) && (md < ld))
		{
			putchar(fd);
			putchar(md);
			putchar(ld);

			if (c != 789)
			{
				putchar(';');
				putchar(' ');
			}
		}
		c++;
	}
	putchar('\n');
	return (0);
}
