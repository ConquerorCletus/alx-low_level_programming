#include "main.h"
#define BUFFSIZE 1024
/**
 * close - This function checks and exit program
 * Return: void
 */
void close(int file_from, int file_to){
        if (close(file_from) == -1)
        {
                dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
                exit(100);
        }
        if (close(file_to) == -1)
        {
                dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to);
                exit(100);
        }
}
/**
 * main - a program that copies file from to another.
 * @argc: argument count parameter
 * @argv: argument vector parameter
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int file_to, file_from, read_length, write_length;
	char buffer[BUFFSIZE];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 00664);
	while ((read_length = read(file_from, buffer, 1024)) != 0)
	{
		if (file_to == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
		if (read_length == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}
		write_length = write(file_to, buffer, read_length);
		if (write_length != read_length || write_length == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}

	close();
	return (0);
}
