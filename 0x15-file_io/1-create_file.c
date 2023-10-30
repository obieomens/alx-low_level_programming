#include "main.h"
/**
 * create_file - Creates a file with specified content.
 * @filename: The name of the file to create.
 * @text_content: The content to write to the file.
 *Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
int file_descrip, write_status, close_status;
mode_t permissions = S_IRUSR | S_IWUSR;
	if (filename == NULL)
	return (-1);

	file_descrip = open(filename, O_CREAT | O_WRONLY | O_TRUNC, permissions);

	if (file_descrip == -1)
	return (-1);

	if (text_content != NULL)
	{
	write_status = write(file_descrip, text_content, strlen(text_content));
	if (write_status == -1)
	{
	close(file_descrip);
	return (-1);
	}
	}

	close_status = close(file_descrip);

	if (close_status == -1)
	return (-1);

	return (1);
}
