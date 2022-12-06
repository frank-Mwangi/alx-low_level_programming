#include <stdio.h>
#include <math.h>

int main(void)
{
	double sum;
	double index = 0, i;

	for (i = 0; i <10; i++)
	{
		sum = pow(2, index);
		index++;
		printf("%f\n", sum);
	}
	return (sum);
}
