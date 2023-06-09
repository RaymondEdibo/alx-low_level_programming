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
	int i, j;

	i = atoi(argv[argc - 2]);
	j = atoi(argv[argc - 1]);
	printf("%d\n", i * j);
	return (0);
}
