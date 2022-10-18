#include "main.h"
/**
 * jack_bauer - prints the minutes and hours of the day
 *
 */
void jack_bauer(void)
{
	int h, m;

	for (h = 00; h < 24; h++)
	{
		_putchar(h);
		for (m = 00; m < 60; m++)
		{
		_putchar(m);
		_putchar('\n');
		}
	}
