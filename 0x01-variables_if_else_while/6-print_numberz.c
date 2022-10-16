#include <stdio.h>
/**
 * main - prints all single digit base 10 numbers
 *
 * Return: always 0 (success)
 */
int main(void)
{
	int i;

	for (i = '0'; i < '10'; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
