#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
/**
 *create_file - check the code
 *@filename: char
 *@text_content: char
 *
 *Return: 0
 */
int create_file(const char *filename, char *text_content)
{
	int j, i = 0, k;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		text_content = "";
	j = open(filename, O_RDWR | O_TRUNC | O_CREAT, 0600);
	if (j == -1)
		return (-1);
	while (text_content[i] != '\0')
		i++;
	k = write(j, text_content, i);
	if (k == -1)
		return (-1);
	return (1);
}
