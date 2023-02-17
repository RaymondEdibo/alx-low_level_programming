#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;
	int x;

	x = 0;
	c = 'a';
	while (x < 10){
		putchar(x + '0');
		x++;
}
	while (c <= 'f'){
		putchar(c);
		c++;
	}
    return (0);
}
