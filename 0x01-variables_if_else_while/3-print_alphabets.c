#include <stdio.h>
/**
 * main - Entry point
 *
 * prints the alphabet in lowercase and uppercase,
 * followed by a newline
 * Return: always 0 (success)
 */
int main(void)
{
	char alph;
	char Alph;

	alph = 'a';
	while (alph <= 'z')
	{
		putchar(alph);
		alph = alph + 1;
	}
	Alph = 'A';
	while (Alph <= 'Z')
	{
		putchar (alph);
	}
	putchar ('\n');
	return (0);
}
