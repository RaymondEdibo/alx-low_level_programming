#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
/**
 *read_textfile - check the code
 *@filename: char
 *@letters: size_t
 *
 *Return: 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int i, j, k;
	char *a;

	if (filename == NULL)
		return (0);
	a = malloc(letters * sizeof(char) + 1);
	if (!a)
		return (0);
	i = open(filename, O_RDONLY);
	if (i == -1)
	{
		free(a);
		return (0);
	}
	j = read(i, a, letters);
	if (j == -1)
	{
		free(a);
		return (0);
	}
	k = write(STDOUT_FILENO, a, j);
	close(i);
	free(a);
	if (j == k)
		return (k);
	return (0);
}
