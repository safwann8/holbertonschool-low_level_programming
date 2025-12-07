#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_file - Creates a file and writes text to it
 * @filename: Name of the file to create
 * @text_content: NULL-terminated string to write into the file
 *
 * Description:
 *   - Creates a file named 'filename' with permissions rw------- (600).
 *   - If the file already exists, it is truncated.
 *   - If filename is NULL, returns -1.
 *   - If text_content is NULL, creates an empty file.
 *   - Returns 1 on success, -1 on failure (cannot create or write to file).
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, bytes_written, text_length = 0;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{
		while (text_content[text_length] != '\0')
			text_length++;
		bytes_written = write(fd, text_content, text_length);
		if (bytes_written != text_length)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
