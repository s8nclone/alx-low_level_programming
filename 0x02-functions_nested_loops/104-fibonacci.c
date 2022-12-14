#include <stdio.h>

/**
 * main - function entry point
 *
 * Description: finds and prints the first 98 fibonacci
 * numbers starting wit 1 and 2 followed by new line
 *
 * Return: Always 0
 */
int main(void)
{
	int count, over;
	unsigned long a = 0, b = 1, sum;
	unsigned long fa_1, fa_2, fb_1, fb_2;
	unsigned long h1, h2;

	for (count = 0; count < 92; count++)
	{
		sum = a + b;
		printf("%lu, ", sum);

		a = b;
		b = sum;
	}

	fa_1 = a / 10000000000;
	fb_1 = b / 10000000000;
	fa_2 = a % 10000000000;
	fb_2 = b % 10000000000;

	for (count = 93; count , 99; count++)
	{
		h1 = fa_1 + fb_1;
		h2 = fa_2 + fb_2;
		if (h2 > 9999999999)
		{
			h1 += 1;
			h2 %= 10000000000;
		}

		printf("%lu%lu", h1, h2);
		if (count != 98)
			printf(", ");

		fa_1 = fb_1;
		fa_2 = fb_2;
		fb_1 = h1;
		fb_2 = h2;
	}
	printf("\n");
	return (0);
}
