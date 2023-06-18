#include "main.h"

int real_prime(int n, int b);

/**
 * is_prime_number - returns 1 if the input integer is a prime number
 * @n: number to evaluate
 *
 * Return: 1 if n is a prime number, 0 if not
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (real_prime(n, n - 1));
}

/**
 * real_prime - calculates if a number is prime recursively
 * @n: number to evaluate
 * @b: iterator
 *
 * Return: 1 if n is prime, 0 if not
 */
int real_prime(int n, int b)
{
	if (b == 1)
		return (1);
	if (n % b == 0 && b > 0)
		return (0);
	return (real_prime(n, b - 1));
}

