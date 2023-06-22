#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * test1- Print character
 * @check: name va_list
 *
 * Return: Nothing.
 */

void test1(va_list check)
{
	printf("%c", va_arg(check, int));
}
/**
 * test2 - Print integer
 * @check: name va_list
 *
 * Return: Nothing.
 */

void test2(va_list check)
{
	printf("%i", va_arg(check, int));
}
/**
 * test3 - print fLoat
 * @check: name of va_list
 *
 * Return: Nothing.
 */

void test3(va_list check)
{
	printf("%f", va_arg(check, double));
}
/**
 * test4 - print string
 * @check: name va_list
 *
 * Return: Nothing.
 */

void test4(va_list check)
{
	char *str;

	str = va_arg(check, char *);
	if (str == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", str);
}

/**
 * print_all - check the code
 * @format: format
 *
 * Return: Nothing.
 */

void print_all(const char * const format, ...)
{

	va_list args;
	unsigned int i, j;
	char *sp = "";

	f ops[] = {
		{"c", test1},
		{"i", test2},
		{"f", test3},
		{"s", test4},
		};

	va_start(args, format);
	i = 0;
	while (format && format[i])
	{
		j = 0;
		while (j < 4)
		{
			if (ops[j].op[0] == format[i])
			{
				printf("%s", sp);
				sp = ", ";
				ops[j].f(args);
				break;
			}
			j++;
		}
	i++;
	}

	printf("\n");
	va_end(args);
}
