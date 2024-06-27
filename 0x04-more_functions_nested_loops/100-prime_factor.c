#include <stdio.h>
#include <math.h>
/**
 * main - Entry Point : A function to print
 *  the maximum factor of a large number;
 * Return: Always 0
 */
int main(void)
{
	long long int num = 612852475143;
	int i, max;
	double sqrt_num = sqrt(num);

	for (i = sqrt_num; i >= 1; i++)
	{
		if (num % i == 0)
		{
			max = i;
		}
	}
	printf("%d\n", max);
	return (0);
}
