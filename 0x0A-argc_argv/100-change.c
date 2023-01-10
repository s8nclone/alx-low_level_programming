#include <stdio.h>
#include <stdlib.h>

/**
 * main - function
 * @argc: int
 * @argv: list
 *
 * Description: prints minimum number of coins to make
 * change for an amount of money
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	if (argc == 2)
	{
		int i;
		int amount = 0;
		int money = atoi(argv[1]);
		int cents[] = {25, 10, 5, 2, 1};

		for (i = 0; i < 5; i++)
		{
			if (money >= cents[i])
			{
				amount += money / cents[i];
				money = money % cents[i];
				if (money % cents[i] == 0)
				{
					break;
				}
			}
		}
		printf("%d\n", amount);
	}
	else
	{
		printf("Error\n");
			return (1);
	}
	return (0);
}
