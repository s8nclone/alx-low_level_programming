#include "main.h"

/**
 * read_textfile - function
 * @filename: file
 * @letters: no of letters it should read and print
 *
 * @Description: reads a text file and prints it to the
 * POSIX standard output
 *
 * Return: actual no of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file, noflett;
	char *text;

	if (!filename)
		return (0);
	text = malloc(sizeof(char) * letters + 1);
	if (text == NULL)
		return (0);
	file = open(filename, O_RDONLY);
	if (file == -1)
	{
		free(text);
		return (0);
	}
	noflett = read(file, text, sizeof(char) * letters);
	if (noflett == -1)
	{
		free(text);
		close(file);
		return (0);
	}
	noflett = write(STDOUT_FILENO, text, noflett);
	if (noflett == -1)
	{
		free(text);
		close(file);
		return (0);
	}
	free(text);
	close(file);
	return (noflett);
}
