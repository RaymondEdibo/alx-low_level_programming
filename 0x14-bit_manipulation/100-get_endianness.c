#include "main.h"
#include <stdio.h>
#include <math.h>
/**
 *get_endianness - check the code
 *
 *Return: no. or 0
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *j = (char *) &i;

	return ((int)*j);
}
