#include "main.h"

/**
 * cp - copies content of source file to destination
 * @file_from: source file
 * @file_to: destination file
 * Return: integer
 */
int cp(char *file_from, char *file_to)
{
	char *buffer[1024];
	int td, fd, fr, fw;
	int fc, ftc;

	fd = open(file_from, O_RDONLY);
	if (fd < 0)
		return (98);
	td = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (td < 0)
		return (99);

	fr = read(fd, buffer, 1024);
	if (fr < 0)
		return (98);

	while (fr > 0)
	{
		fw = write(td, buffer, fr);
		if (fw < 0)
			return (99);
		fr = read(fd, buffer, 1024);
		if (fr < 0)
			return (98);
	}

	fc = close(fd);
	if (fc < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fc);
		return (100);
	}
	ftc = close(td);
	if (ftc < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", ftc);
		return (100);
	}
	return (0);
}
/**
 * main - entry point
 * @ac: argument count
 * @av: argument vector
 * Return: 0 (success)
 */
int main(int ac, char **av)
{
	int c;

	if (ac != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);

	c = cp(av[2], av[1]);
	switch (c)
	{
		case (98):
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
			exit(98);
		case (99):
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
			exit(99);
		case (100):
			exit(100);
		default:
			return (0);
	}
}
