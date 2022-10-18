#include "main.h"
/**
 * print_alphabet_x10 - prints the alphabet 10 times 
 *
 */
void print_alphabet_x10(void)
{
	char i;
	int count = 0;

	for (i = 'a'; i <= 'z'; i++)
	{
		for (count = 1; count <10; count++)
		{
			_putchar('\n');
		}
		_putchar(i);
	}
}
