#include "main.h"

/**
 * _sqrt_recursion - finds natural square root
 *
 * @n: integer input
 * Return: squareroot
 */

int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (sqrt(1, n));
}

/**
 * sqrt - guesses the natural square root to
 *	a number
 * @i: square root guesses
 * @j: input integer
 * Return: square root
 */
int sqrt(int i, int j)
{
	if (i * i == j)
		return (i);
	else if (i * i > j)
		return (-1);
	return (sqrt(x + 1, y));
}
{
