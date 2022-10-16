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
	Alph = 'A';
	while (alph <= 'z')
	{
		putchar(alph);
		alph = alph + 1;
	}
	while (Alph <= 'Z')
	{
		putchar (Alph);
		Alph = Alph + 1;
	}
	putchar ('\n');
	return (0);
}
