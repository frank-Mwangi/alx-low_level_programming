#include <stdio.h>
/**
 * main - prints hexadecimal numbers in lowercase
 *
 * Return: always 0 (success)
 */
int main(void)
{
	char hex;
	char Hex;

	for (hex = '0'; hex <= '9'; hex++)
	{
		putchar(hex);
	}
	Hex = 'a';
	while (Hex <= 'f')
	{
		putchar(Hex);
		Hex++;
	}
	putchar('\n');
	return (0);
}
