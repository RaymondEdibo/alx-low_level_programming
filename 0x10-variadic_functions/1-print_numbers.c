#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 *print_numbers - check the code
 *@separator: int
 *@n: int
 *
 *Return: 0
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i, j;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n - 1; i++)
	{
		j = va_arg(args, int);
		printf("%d%s", j, separator != NULL ? separator : "");
	}
	j = va_arg(args, int);
	printf("%d\n", j);
	va_end(args);
}
