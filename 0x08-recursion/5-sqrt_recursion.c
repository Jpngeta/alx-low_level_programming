#include "main.h"
int other_sqrt_recursion(int n, int a);
/**
  *_sqrt - function that returns the natural square root of a number.
  *@n: the square number
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
 * @n: number to calculate the sqaure root of
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


