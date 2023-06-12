#include "main.h"

/**
 * create_file - create a file and write to it
 * @filename: name of the file to create
 * @text_content: text to be written to the file (NULL-terminated string)
 * Return: 1 if success, -1 if failed
 */

int create_file(const char *filename, char *text_content)
{
	FILE *file;
	int fputs_result;

	if (filename == NULL)
		return (-1);

	/* Open the file for writing (truncating it if it exists) */
	file = fopen(filename, "w");
	if (file == NULL)
		return (-1);

	/* Write the content to the file if text_content is not NULL */
	if (text_content != NULL)
	{
		fputs_result = fputs(text_content, file);
		if (fputs_result == EOF)
		{
			fclose(file);
			return (9-1);
		}
	}

	/* Close the file */
	if (fclose(file) == EOF)
		return (-1);

	return (1);
}
