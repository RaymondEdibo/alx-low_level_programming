#include "main.h"
#include <stdio.h>

/**
 *main - check the code
 *@argc: number of arguments
 *@argv: array of arguments
 *
 *Return: 0
 */
int main(int argc, char *argv[])
{
	int t = 0;

	while (t < argc)
	{
		printf("%s\n", argv[t]);
		t++;
	}
	return (0);
}
