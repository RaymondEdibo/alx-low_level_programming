#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 *print_all - check the code
 *i = int, f = float, s = char *, c = char
 *@format: arg types
 *
 *Return: 0
 */
void print_all(const char * const format, ...);
{
	va_list args;
	int j = 0, i = 0;
	char *sp = ", ";
	char *a;

	va_start(args, format);

	while (format && format[i])
		i++;

	while (format && format[j])
	{
		if (j  == (i - 1))
		{
			sp = "";
		}
		switch (format[j])
		{
		case 'c':
			printf("%c%s", va_arg(args, int), sp);
			break;
		case 'i':
			printf("%d%s", va_arg(args, int), sp);
			break;
		case 'f':
			printf("%f%s", va_arg(args, double), sp);
			break;
		case 's':
			a = va_arg(args, char *);
			if (a == NULL)
				a = "(nil)";
			printf("%s%s", a, sp);
			break;
		}
		j++;
	}
	printf("\n");
	va_end(args);
}
