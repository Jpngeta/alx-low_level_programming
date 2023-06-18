#include "main.h"

/**
 * factorial - A function that returns the factorial of a number
 *@n : Number whose factorial is needed
 *Return: the factorial of the number
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}

