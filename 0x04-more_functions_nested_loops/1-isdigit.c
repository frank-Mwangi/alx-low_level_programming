#include "main.h"
#include <stdio.h>

/**
 * _isdigit - checks whether input is a digit
 *
 * @c: input integer
 * Return: 1 if digit, 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
int main(void)

{
	char c;

        c = '0';
	printf("%c: %d\n", c, _isdigit(c));
	c = 'a';
	printf("%c: %d\n", c, _isdigit(c));

	return (0);
}
