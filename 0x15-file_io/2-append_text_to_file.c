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
        int i;
        ssize_t l = 0, k = 0;
        char *a;

        if (filename == NULL)
                return (-1);

        i = open(filename, O_WRONLY | O_APPEND);
        if (i == -1)
                return (-1);

        if (text_content != NULL)
        {
                for (k = 0, a = text_content; *a; a++)
                        k++;
                l = write(i, text_content, k);
        }

        if (close(i) == -1 || k != l)
                return (-1);
        return (1);
}
