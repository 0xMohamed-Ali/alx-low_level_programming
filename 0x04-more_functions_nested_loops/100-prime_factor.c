#include <stdio.h>

/**
 * main - Entry Point : A function to print
 *  the maximum factor of a large number;
 * Return: Always 0
 */
int main(void)
{
	long int num = 612852475143;
	int max;
	for (max = 1; max < num; max++)
	{
		if (num % max == 0)
		{
			num = num / max;
		}
	}
	printf("%d\n", max);
	return (0);
}
