#include "main.h"

/**
 * sqrt_checker - checks
 * @a: assumption
 * @b: n
 *
 * Return: -1
 */
int sqrt_checker(int a, int b)
{
	if (a * a == b)
		return (a);
	if (a * a > b)
		return (-1);
	return (sqrt_checker(a + 1, b));
}

/**
 * _sqrt_recursion - square root
 * @n: int
 *
 * Return: square root
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (sqrt_checker(1, n));
}
