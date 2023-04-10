#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
  * set_bit - Sets bit to 1 at index
  * @n: modify
  * @index: The index
  *
  * Return: 1 or -1
  */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(unsigned long int) * 8){
		return (-1);
} else {
	return ((*n |= 1 << index) ? 1 : -1);
}
}
