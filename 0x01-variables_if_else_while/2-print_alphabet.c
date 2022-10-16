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

	for (alph = 0; alph < 26; alph++)
	{
		putchar (alph);
	}
	return (0);
}
