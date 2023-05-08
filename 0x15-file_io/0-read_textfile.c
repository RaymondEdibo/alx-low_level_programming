#include "main.h"

/**
  * read_textfile -
  * @filename: source file
  * @letters: Number of letters
  *
  * Return: 
  */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int f, readed;
	char *b = malloc(sizeof(char *) * letters);

	if (!b)
		return (0);

	if (!filename)
		return (0);

	f = open(filename, O_RDONLY, 0600);
	if (f == -1)
		return (0);

	readed = read(f, b, letters);
	write(STDOUT_FILENO, b, readed);

	free(b);
	close(f);
	return (readed);
}
