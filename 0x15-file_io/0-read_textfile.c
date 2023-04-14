#include "main.h"

/**
  * read_textfile - read
  * @filename: source file
  * @letters: No. of letters
  *
  * Return: done
  */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int i, done;
	char *cr = malloc(sizeof(char *) * letters);

	if (!cr)
		return (0);

	if (!filename)
		return (0);

	i = open(filename, O_RDONLY, 0600);
	if (i == -1)
		return (0);

	done = read(i, cr, letters);
	write(STDOUT_FILENO, cr, done);

	free(cr);
	close(i);
	return (done);
}
