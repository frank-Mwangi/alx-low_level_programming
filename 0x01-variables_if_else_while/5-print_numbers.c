#include <stdio.h>
/**
 * main - entry point
 * prints all single digit base 10 numbers
 * Return: always 0 (success)
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		printf("%d", i);
	}
	putchar('\n');
	return (0);
}
