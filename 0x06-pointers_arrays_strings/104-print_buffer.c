#include "main.h"
#include <stdio.h>

/**
 * print_buffer - entry function
 * @b: buffer to print
 * @size: size of buffer
 *
 * Description: prints a buffer
 *
 * Return: nothing
 */
void print_buffer(char *b, int size)
{
	int byte, index;

	if (size <= 0)
		printf("\n");
	else
	{
		for (byte = 0; byte < size; byte += 10)
		{
			printf("%08x: ", byte);
			index = 0;
			while (index < 10)
			{
				if (index % 2 == 0 && index != 0)
				{
					printf(" ");
				}
				if ((index + byte) > size - 1)
				{
					printf("  ");
				}
				else
				{
					printf("%.2x", b[byte + index]);
				}
				index++;
			}
			printf(" ");
			index = 0;
			while (index < 10)
			{
				if ((index + byte) > size - 1)
					break;
				if (b[index + byte] <= 31 || b[index + 1] >= '~')
					b[index + byte] = '.';
				putchar(b[index + byte]);
				index++;
			}
			printf("\n");
		}
	}
}
