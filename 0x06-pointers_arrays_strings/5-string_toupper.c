#include "main.h"

/**
 * string_toupper - converts lowercase letters in string
 *			to uppercase
 *
 * Return: result
 */

char *string_toupper(char *c)
{
	char result;
	int i;

	for (i = 0; *(c + i) != '\0'; i++)
	{
		if (i >= 97 && i <= 122)
			result = (i - 32);
		else
			result = i;
	}
	return (result);
}
