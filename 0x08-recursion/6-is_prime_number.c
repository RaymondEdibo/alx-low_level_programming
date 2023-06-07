#include "main.h"

/**
 * prime_check - check
 * @x: int
 * @y: int
 * Return: 0
 */

int prime_check(int x, int y)
{
	if (x <= 1 || (x != y && x % y == 0))
	{
		return (0);
	}
		else if (x == y)
	{
		return (1);
	}
	return (prime_check(x, y + 1));
}


/**
 * is_prime_number - prime numbers
 * @n: number
 *
 * Return: 0
 */
int is_prime_number(int n)
{
	return (prime_check(n, 2));
}

