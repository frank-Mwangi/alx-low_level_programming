#include "main.h"
/**
 * main - entry point to the program
 * Return: always 0.
 */
int main(void)
{
	print_alphabet();
	return (0);
}
void print_alphabet(void)
{
	char i;

	i = 'a';
	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
