#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_strings - check
 * @n: arguments
 * @separator: separator
 * Return: Always 0.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *a;

	if (separator == NULL)
	{
		separator = "";
	}

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		a = va_arg(args, char *);
		if (a == NULL)
		{
			printf("(nil)");
			break;
		}
		printf("%s", a);
		if (n == i + 1)
		{
			break;
		}
		printf("%s", separator);
	}
	printf("\n");
	va_end(args);
}
