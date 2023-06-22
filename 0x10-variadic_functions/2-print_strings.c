#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 *print_strings - check the code
 *@separator: int
 *@n: int
 *
 *Return: 0
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i, j;
	char *a;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n - 1; i++)
	{
		a = va_arg(args, char*);
		if (a == NULL)
			printf("(nil)%s", separator != NULL ? separator : "");
		else
			printf("%s%s", a, separator != NULL ? separator : "");
	}
	a = va_arg(args, char*);
	if (a == NULL)
		printf("(nil)\n");
	else
		printf("%s\n", a);

	va_end(args);
}
