#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
  * get_bit - Gets value of a bit
  * @n: number to find the index
  * @index: index
  *
  * Return: 0 or -1
  */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int comp_i = 0;

	while (n)
	{
		if (comp_i == index)
		{
			if (n % 2)
				return (1);
			else
				return (0);
		}

		n = n / 2;
		comp_i++;
	}

	if (index > comp_i && index < 63){
		return (0);
	} else {
	return (-1);
}
}
