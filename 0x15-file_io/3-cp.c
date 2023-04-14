#include <stdio.h>
#include "main.h"

/**
  * main - Entry
  * @argc: count
  * @argv: vector
  *
  * Return: NIL
  */
int main(int argc, char **argv)
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	copy_file(argv[1], argv[2]);
	exit(0);
}

/**
  * copy_file - copy
  * @src: source
  * @dest: destination
  *
  * Return: NIL
  */
void copy_file(const char *src, const char *dest)
{
	int i, x, done;
	char cr[1024];

	i = open(src, O_RDONLY);
	if (!src || i == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", src);
		exit(98);
	}

	x = open(dest, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	while ((done = read(i, cr, 1024)) > 0)
	{
		if (write(x, cr, done) != done || x == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", dest);
			exit(99);
		}
	}

	if (done == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", src);
		exit(98);
	}

	if (close(i) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", i);
		exit(100);
	}

	if (close(x) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", x);
		exit(100);
	}
}
