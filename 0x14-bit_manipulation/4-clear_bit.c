#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
  * clear_bit - Sets bit to 0
  * @n: modify
  * @index: The index
  *
  * Return: 1 or -1
  */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index < sizeof(unsigned long int) * 8)
	{
		*n &= (~(1 << index));
		return (1);
	} else {
	return (-1);
}
}
