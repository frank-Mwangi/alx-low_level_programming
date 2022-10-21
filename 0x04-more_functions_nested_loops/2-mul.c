#include "main.h"
#include <stdio.h>

/**
 * mul - multiplies two digit
 * @a: integer 1
 * @b: integer 2
 * Return: result
 */

int mul(int a, int b)
{
	int result;

	result = a * b;
	return (result);
}
int main(void)

{
	printf("%d\n", mul(98, 1024));
        printf("%d\n", mul(-402, 4096));
	return (0);
}
