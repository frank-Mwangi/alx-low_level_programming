#include "main.h"
/**
 * print_alphabet_x10 - prints the alphabet 10 times
 *
 */
void print_alphabet_x10(void)
{
	char i;
	int count;

	for (count = 0; count <= 9; count++)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}
