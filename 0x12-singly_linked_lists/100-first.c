#include<stdio.h>

/**
 * race - Apply constructor attribute to race() before main()
 */
void race(void) __attribute__ ((constructor));

/**
 * race - real race
 */
void race(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
