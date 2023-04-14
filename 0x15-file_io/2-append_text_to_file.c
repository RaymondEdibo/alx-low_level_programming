#include <stdio.h>
#include "main.h"

/**
  * append_text_to_file - append
  * @filename: name
  * @text_content: text
  *
  * Return: 1
  */
int append_text_to_file(const char *filename, char *text_content)
{
	int i;

	if (!filename)
		return (-1);

	i = open(filename, O_WRONLY | O_APPEND);
	if (i == -1)
		return (-1);

	if (text_content)
	{
		if (write(i, text_content, _strlen(text_content)) == -1)
			return (-1);
	}

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
