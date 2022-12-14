#include <stdio.h>

/**
 * main - entry point
 *
 * Description: prnts first 50 fibonacci numbers
 * starting with 1 and 2, followed by new line
 *
 * Return: Always 0
 */
int main(void)
{
	int i;
	int n = 50;
	long a = 1;
	long b = 2;
	long next;

	for (i = 0; i < 50; i++)
	{
		if (i == 49)
		{
			printf("%lu", a);
		}
		else
		{
			printf("%lu, ", b);
			next = a + b;
			a = b;
			b = next;
		}
	}
	printf("\n");
	return (0);
}
