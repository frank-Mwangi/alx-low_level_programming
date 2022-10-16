#include <stdio.h>
/**
 * main - Entry point.
 * prints the alphabet in lowercase,
 * except letters q and e
 * Return: always 0 (success)
 */
int main(void)
{
	char alph;

	alph = 'a';
	while (alph <= 'z')
	{
		putchar(alph);
		alph++;
		if (alph == 'q' || alph == 'e')
		{
			alph = alph + 1;
			continue;
		}
	}
	putchar('\n');
	return (0);
}
