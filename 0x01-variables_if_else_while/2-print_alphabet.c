#include <stdio.h>
/**
 * main - Entry point
 *
 * prints the alphabet in lowercase
 * Return: Always 0 (success)
 */
int main(void)
{
	char alph;

	while (alph <= 'z')
	{
		putchar (alph);
		alph = alph + 1;
	}
	return (0);
}
