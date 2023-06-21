#include <stdio.h>
#include <stdlib.h>
/**
 * main - check
 * @argc: arguments
 * @argv: double pointer to arguments
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int j, i;
	char *s = (char *)main;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	j = atoi(argv[1]);

	if (j < 0)
	{
		printf("Error\n");
		return (2);
	}

	for (i = 0; i < j; i++)
		printf("%02x ", s[i]);

	printf("\n");
	return (0);
}
