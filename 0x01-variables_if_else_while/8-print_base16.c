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

	hex = 0;
	while (hex <= '9')
	{
		putchar(hex);
		hex++;
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
