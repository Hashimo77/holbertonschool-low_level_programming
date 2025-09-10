#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

#define BUF_SIZE 1024

void print_error_exit(int code, const char *msg, const char *file, int fd);
int open_file_from(char *filename);
int open_file_to(char *filename);
void copy_file(int fd_from, int fd_to, char *file_from, char *file_to);
void close_fd(int fd);

int main(int ac, char **av)
{
	int fd_from, fd_to;

	if (ac != 3)
		print_error_exit(97, NULL, NULL, 0);

	fd_from = open_file_from(av[1]);
	fd_to = open_file_to(av[2]);

	copy_file(fd_from, fd_to, av[1], av[2]);

	close_fd(fd_from);
	close_fd(fd_to);

	return (0);
}
