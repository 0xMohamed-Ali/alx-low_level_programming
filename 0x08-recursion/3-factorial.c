#include "main.h"
/**
 * factorial - returns the factorial of a given number
 * @n: number to be factored
 * Return: factorial of n
 */
int factorial(int n)
{
	int factor = n;

	if (factor < 0)
		return (-1);
	if (n == 1 || n == 0)
		return (1);
	return (n * factorial(n - 1));
}
