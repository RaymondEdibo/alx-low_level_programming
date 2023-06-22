#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 *sum_them_all - check the code
 *@n: int
 *
 *Return: 0
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, j;
	unsigned int sum = 0;
	va_list args;

	va_start(args, n);

	if (n == 0)
	{
		return (0);
	}
	for (i = 0; i < n; i++)
	{
		j = va_arg(args, int);
		sum += j;
	}
	va_end(args);
	return (sum);
}
