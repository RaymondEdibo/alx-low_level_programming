#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
  * clear_bit - Sets the value of a bit to 0
  * @n: number to modify
  * @index: number to modify
  *
  * Return: 1 if it worked, else -1
  */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index < sizeof(unsigned long int) * 8)
	{
		*n &= (~(1 << index));
		return (1);
	}

	return (-1);
}
