#include <stdio.h>

/**
 * main - function entry point
 *
 * Description: finds and prints the sum of the
 * even-value numbers < 4,000,000, followed by a new line
 *
 * Return: Always 0
 */
int main(void)
{
	int a = 0;
	int b = 1;
	int n = 0;
	int sum = 0;

	while (n < 4000000)
	{
		n = a + b;
		a = b;
		b = n;
		if (n % 2 == 0)
		{
			sum += n;
		}
	}
	printf("%d\n", sum);
	return (0);
}
