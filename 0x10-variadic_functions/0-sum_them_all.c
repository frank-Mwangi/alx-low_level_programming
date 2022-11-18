#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - sums parameters
 * @n: number of parameters
 *
 * Return: sum
 *
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	int sum = 0;
	unsigned int i;

	if (n == 0)
		return (0);
	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(args, int);
	}
	va_end(args);
	return (sum);
}
int main(void)

{

	    int sum;



	        sum = sum_them_all(2, 98, 1024);

		    printf("%d\n", sum);

		        sum = sum_them_all(4, 98, 1024, 402, -1024);

			    printf("%d\n", sum);    

			        return (0);

}
