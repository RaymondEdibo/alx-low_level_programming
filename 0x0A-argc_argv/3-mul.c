#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

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

	if (argc == 3)
	{
		i = atoi(argv[argc - 2]);
		j = atoi(argv[argc - 1]);
		printf("%d\n", i * j);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);

	}
}
