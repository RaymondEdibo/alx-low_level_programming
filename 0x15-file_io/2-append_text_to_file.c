#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
/**
 *append_text_to_file - check the code
 *@filename: char
 *@text_content: char
 *
 *Return: 0
 */
int append_text_to_file(const char *filename, char *text_content)
{
	FILE *file;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
	{
		file = fopen(filename, "r");
		if (file == NULL)
			return (-1);
		fclose(file);
		return (1);
	}

	file = fopen(filename, "a");
	if (file == NULL)
		return (-1);

	fprintf(file, "%s", text_content);
	fclose(file);

	return (1);
}
