#include "main.h"

/**
 * cls - error check
 * @file1_err: error in closing file1
 * @file1: file descriptor
 * @file2_err: error in closing file2
 * @file2: file descriptor
 */

void	cls(int file1_err, int file1, int file2_err, int file2)
{
	if (file1_err == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", file1);
		exit(100);
	}
	if (file2_err == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", file2);
		exit(100);
	}
}

/**
 * main - entry point
 * @argc: arguments count
 * @argv: pointer to array of arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int	file1, file1_err, wrt;
	int	file2, file2_err, rd = 1024;
	char	buff[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}
	file1 = open(argv[1], O_RDONLY);
	if (file1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		return (98);
	}
	file2 = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (file2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		return (99);
	}
	while (rd == 1024)
	{
		rd = read(file1, buff, 1024);
		if (rd == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			return (98);
		}
		wrt = write(file2, buff, rd);
		if (wrt == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			return (99);
		}
	}
	file1_err = close(file1);
	file2_err = close(file2);
	cls(file1_err, file1, file2_err, file2);
	return (0);
}