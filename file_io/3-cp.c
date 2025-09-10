#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

#define BUF_SIZE 1024

void print_error_exit(int code, const char *msg, const char *file, int fd)
{
	if (code == 97)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
	else if (code == 98)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file);
	else if (code == 99)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
	else if (code == 100)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);

	exit(code);
}

/**
 * main - copies the content of a file to another file
 * @ac: argument count
 * @av: argument vector
 *
 * Return: 0 on success
 */
int main(int ac, char **av)
{
	int fd_from, fd_to;
	ssize_t r, w;
	char buffer[BUF_SIZE];

	if (ac != 3)
		print_error_exit(97, NULL, NULL, 0);

	fd_from = open(av[1], O_RDONLY);
	if (fd_from == -1)
		print_error_exit(98, NULL, av[1], 0);

	fd_to = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		close(fd_from);
		print_error_exit(99, NULL, av[2], 0);
	}

	while ((r = read(fd_from, buffer, BUF_SIZE)) > 0)
	{
		w = write(fd_to, buffer, r);
		if (w != r)
		{
			close(fd_from);
			close(fd_to);
			print_error_exit(99, NULL, av[2], 0);
		}
	}

	if (r == -1)
	{
		close(fd_from);
		close(fd_to);
		print_error_exit(98, NULL, av[1], 0);
	}

	if (close(fd_from) == -1)
		print_error_exit(100, NULL, NULL, fd_from);

	if (close(fd_to) == -1)
		print_error_exit(100, NULL, NULL, fd_to);

	return (0);
}
