#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
  * set_bit - Sets the value of a bit to 1
  * @n: modify
  * @index: index to modify
  *
  * Return: 1 if it worked, else -1
  */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(unsigned long int) * 8)
		return (-1);

	return ((*n |= 1 << index) ? 1 : -1);
}
