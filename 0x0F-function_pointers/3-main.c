#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - check
 * @argc: arguments
 * @argv: double pointer to arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i, j, k;
	int (*sol)(int, int);
	char *get_op;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	i = atoi(argv[1]);
	j = atoi(argv[3]);
	get_op = argv[2];

	if (get_op_func(argv[2]) == NULL || argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if ((*get_op == '/' || *get_op == '%') && (*argv[3] == '0'))
	{
		printf("Error\n");
		exit(100);
	}

	sol = get_op_func(get_op);
	k = sol(i, j);

	printf("%d\n", k);
	return (0);
}
