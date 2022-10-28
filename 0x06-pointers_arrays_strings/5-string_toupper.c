#include "main.h"

/**
 * string_toupper - converts lowercase letters in string
 *			to uppercase
 * @c: String in question
 * Return: result
 */

char *string_toupper(char *c)
{
	char result;
	int i;

	for (i = 0; *(c + i) != '\0'; i++)
	{
		if (i >= 'a' && i <= 'z')
			result = *(c + (i - 32));
		else
			result = *(c + i);
	}
	return (result);
}
