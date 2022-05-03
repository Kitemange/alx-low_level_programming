#include "main.h"

/**
 * read_textfile - a function that reads a
 * text file and prints it to the POSIX standard output
 * @filename: of the file
 * @letters: the number of letters it should read and print
 * Return: the actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	register int op, rd, wr;
	register char *buffer = malloc(sizeof(char)  * letters);

	if (!(buffer))
	{
		free(buffer);
		return (0);
	}
	if (!(filename))
		return (0);
	op = open(filename, O_RDONLY);
	rd = read(_open, buffer, letters);
	wr = write(STDOUT_FILENO, buffer, _read);

	if (op == -1 || rd == -1 || wr == -1 || !(wr == rd))
	{
		free(buffer);
		return (0);
	}
	free(buffer);
	close(op);
	return (wr);
}
