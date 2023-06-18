#include "main.h"
int other_sqrt_recursion(int n, int a);
/**
  *_sqrt_recursion - function that returns the natural square root of a number
  *@n: number to get the square root of
  *Return: square root of n
  */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (other_sqrt_recursion(n, 0));
}

/**
 * other_sqrt_recursion - find the natural square root of a number
 * @n: number to calculate the square root of
 * @a: iterator
 *
 * Return: the square root
 */
int other_sqrt_recursion(int n, int a)
{
	if (a * a > n)
		return (-1);
	if (a * a == n)
		return (a);
	return (other_sqrt_recursion(n, a + 1));
}


