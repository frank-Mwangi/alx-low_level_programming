#include "main.h"

/**
 * reset_to_98 - uses pointer to update the value it points
 *		to 98
 *
 * @n: pointer to an integer
 */

void reset_to_98(int *n)
{
	int i;

	n = &i;
	*n = 98;
}
