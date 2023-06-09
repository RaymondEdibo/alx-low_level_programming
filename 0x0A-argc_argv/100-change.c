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
	int j = 0;
	int i = 1;
	int change = 0;
	int cents[5] = {25, 10, 5, 2, 1};
	int coin, a;

	if (argc == 2)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] == '-')
			{
				printf("0\n");
				return (0);
			}
			if (!(isdigit(argv[i][j])))
			{
				printf("Error\n");
				return (1);
			}
		}
		coin = atoi(argv[i]);
		for (a = 0; a < 5; a++)
		{

			while (coin >= cents[a])
			{
				coin -= cents[a];
				change += 1;
			}
		}
		printf("%d\n", change);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
