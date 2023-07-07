#include "main.h"
#include <stdio.h>
#include <math.h>
/**
 *flip_bits - check the code
 *@n: int
 *@m: int
 *
 *Return: no. or 0
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int i = 0, j, k;

	while (!(n == 0 && m == 0))
	{
		j = n & 1;
		k = m & 1;
		n = n >> 1;
		m = m >> 1;
		if (j != k)
			i += 1;
	}
	return (i);
}
