#include "main.h"

/**
 * append_text_to_file - appends text at the end of file
 * @filename: name of the file
 * @text_content: the NULL-terminated string to add to the file
 * Return: 1 if success, -1 if failed
 */

int append_text_to_file(const char *filename, char *text_content)
{
    FILE *file;
    int fputs_result;

    if (filename == NULL)
        return (-1);

    if (text_content == NULL)
        return (-1);

    file = fopen(filename, "a");
    if (file == NULL)
        return (-1);

    fputs_result = fputs(text_content, file);

    if (fclose(file) == EOF)
        return (-1);

    return ((fputs_result == EOF) ? -1 : 1);
}
