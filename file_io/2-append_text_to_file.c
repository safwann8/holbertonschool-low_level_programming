#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: The name of the file.
 * @text_content: The NULL-terminated string to add at the file's end.
 *
 * Description: This function appends text to the end of an existing file.
 * It does not create the file if it does not exist.
 * If filename is NULL, the function returns -1.
 * If text_content is NULL, nothing is written:
 *   - Return 1 if the file exists.
 *   - Return -1 if the file does not exist or writing is not permitted.
 *
 * Return: 1 on success, -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, bytes_written, text_length = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}

	while (text_content[text_length] != '\0')
		text_length++;

	bytes_written = write(fd, text_content, text_length);
	if (bytes_written != text_length)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}
