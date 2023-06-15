#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * checker1 - check 1
 * @a: validate
 *
 * Return: 1 only digits, 0 otherwise
 */
int checker1(char *a)
{
	while (*a)
	{
		if (!isdigit(*a))
			return (0);
		a++;
	}
	return (1);
}
/**
 * checker2 - check 2
 * @i: validate
 * @j: validate
 *
 * Return: NULL
 */
void checker2(char *i, char *j)
{
	unsigned long long int k;

	k = strtoull(i, NULL, 10) * strtoull(j, NULL, 10);
	printf("%llu\n", k);
}
/**
 * main - final code
 * @argc: validate
 * @argv: validate
 *
 * Return: 98 or 0
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (98);
	}

	if (!checker1(argv[1]) || !checker1(argv[2]))
	{
		printf("Error\n");
		return (98);
	}

	checker2(argv[1], argv[2]);

	return (0);
}
