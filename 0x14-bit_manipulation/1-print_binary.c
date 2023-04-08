#include <stdio.h>
#include "main.h"

/**
* print_binary - print
*
* @n: number
*/

void print_binary(unsigned long int n){

int l, h, k, z, r;
z = n/1000,
l = n/100;
k = n/10;
h = n%10;


r = ((z*8)+(l*4)+(k*2)+(h*1));
	_putchar(r + '0');
}
