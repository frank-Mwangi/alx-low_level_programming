#include "main.h"
/**
 * main - entry point to the program
 * Return: always 0.
 */
int main(void)
{
	int i;

	i = 'a';
	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
	return (0);
}
