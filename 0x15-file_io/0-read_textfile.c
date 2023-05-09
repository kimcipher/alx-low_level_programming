#include "main.h"

/**
*read_textfile - a function that reads a textfile and prints it to the
*POSIX standard output
*@filename: file to read from
*@letters: number of letters to print
*Return: return number of letters it could print, NULL if file is empty and
*0 if file cannot be opened or read or if it fails to print number of bytes
*expected
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	int d, _read, _written;
	char *buffer;

	if (!filename)
	{
		return (0);
	}

	d = open(filename, O_RDONLY);
	if (d == -1)
	{
		return (0);
	}

	buffer = malloc(sizeof(char) * letters);
	if (!buffer)
	{
		return (0);
	}

	_read = read(d, buffer, letters);
	if (_read == -1)
	{
		free(buffer);
		close(d);
		return (0);
	}

	_written = write(STDOUT_FILENO, buffer, _read);
	if (_written == -1 || _written != _read)
	{
		free(buffer);
		close(d);
		return (0);
	}

	free(buffer);
	close(d);
	return (_written);
}
