#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"

/**
  * print_binary - Prints
  * @n: binary number
  *
  * Return: 0
  */
void print_binary(unsigned long int n)
{
	if (n == 0)
	{
		_putchar('0');
		return;
	}

	_do(n);
}

/**
  * _do - print
  * @n: integer
  *
  * Return: 0
  */
void _divide(unsigned long int n)
{
	if (n < 1)
		return;

	_do(n >> 1);

	if (n & 1)
		_putchar('1');
	else
		_putchar('0');
}
