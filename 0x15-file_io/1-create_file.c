#include "main.h"

/**
 * create_file - create a file and write to it
 * @filename: name of the file to create
 * @text_content: text to be written to the file (NULL-terminated string)
 * Return: 1 if success, -1 if failed
 */

int create_file(const char *filename, char *text_content)
{
    int fd, result_write_call, text_length;

    int text_length = 0;

    if (filename == NULL)
        return (-1);

	/* Calculate the length of the text_content */
    while (text_content && text_content[text_length])
        text_length++;

	/* Create the file with rw------- permissions */
    fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
    if (fd == -1)
        return (-1);

	/* Write the text_content to the file */
    result_write_call = write(fd, text_content, text_length);
    if (result_write_call == -1)
    {
        close(fd);
        return (-1);
    }

    close(fd);
    return (1);
}
