#include "main.h"

/**
  * create_file - create
  * @filename: name
  * @text_content: content
  *
  * Return: 1
  */
int create_file(const char *filename, char *text_content)
{
	int i;

	if (!filename)
		return (-1);

	i = open(filename, O_RDWR | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (i == -1)
		return (-1);

	if (text_content)
		write(i, text_content, _strlen(text_content));

	close(i);
	return (1);
}

/**
  * _strlen - length of string
  * @s: count
  *
  * Return: length
  */
int _strlen(char *s)
{
	int c = 0;

	while (s[c])
		c++;

	return (c);
}
