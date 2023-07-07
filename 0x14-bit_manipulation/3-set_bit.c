#include "main.h"
#include <stdio.h>
/**
 *set_bit - check the code
 *@n: int
 *@index: int
 *
 *Return: no. or 0
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	int bit;

	if (index > 63)
		return (-1);
	bit = 1 << index;
	*n = *n | bit;
	return (1);
}
