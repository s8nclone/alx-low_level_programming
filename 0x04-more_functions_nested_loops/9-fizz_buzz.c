#include <stdio.h>

/**
 * main - function entry
 *
 * Description: prints fizzbuzz for multiple of 3 and 5,
 * fizz for muktiple of 3 and buzz for mutiple of 5
 *
 * Return: Always 0
 */

int main(void)
{
	int i = 1;

	while (i <= 100)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d ", i);
		}
		if (i != 100)
		{
			printf(" ");
		}
		i++;
	}
	_putchar('\n');
	return (0);
}
