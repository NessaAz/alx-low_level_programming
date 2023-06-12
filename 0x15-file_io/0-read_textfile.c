#include "main.h"

/**
 * read_textfile - reads text file and prints it to the POSIX standard output
 * @filename: file to be read
 * @letters: number of letters to read and print
 * Return: number of letters read and printed, otherwise 0
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
    FILE *file;
    char *buffer;
    ssize_t read_bytes, written_bytes;

    if (filename == NULL)
        return (0);

    file = fopen(filename, "r");
    if (file == NULL)
        return (0);

    buffer = (char *)malloc(sizeof(char) * (letters + 1));
    if (buffer == NULL)
    {
        fclose(file);
        return (0);
    }

    read_bytes = fread(buffer, sizeof(char), letters, file);
    if (read_bytes <= 0)
    {
        fclose(file);
        free(buffer);
        return (0);
    }

    written_bytes = write(STDOUT_FILENO, buffer, read_bytes);
    if (written_bytes <= 0 || written_bytes != read_bytes)
    {
        fclose(file);
        free(buffer);
        return (0);
    }

    fclose(file);
    free(buffer);
    return (read_bytes);
}
