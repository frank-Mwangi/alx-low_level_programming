#include "main.h"

/**
 * print_diagonal - draws diagonal lines on terminal
 * @n: input integer
 */

void print_diagonal(int n)
{
	int i, j;

	for (i = 1; i <= n; i++)
	{
		for (j = 0; j <= i; j++)
		{
			if (j == i)
			{
				_putchar('\\');
				_putchar('\n');
			}
				else
				{
					putchar(' ');
				}
		}
	}
}
