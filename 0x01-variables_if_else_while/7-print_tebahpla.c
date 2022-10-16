#include<stdio.h>
/**
 * main - prints the alphabet in reverse
 *
 * Return: always 0 (success)
 */
int main(void)
{
	char i;

	i = 'z';
	while (i >= 'a')
	{
		putchar(i);
		i--;
	}
	putchar('\n');
	return (0);
}
