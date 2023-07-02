#include "factors.h"
/**
 * main - main function
 * @argc: number of arguments passed to the program
 * @argv: array of pointers to the arguments passed to the program
 *
 * Return: 0 on success, 1 on failure
 */
int main(int argc, char *argv[])
{
	FILE *file_ptr;
	size_t buffer_size;
	ssize_t linesize;
	char *linebuffer = NULL;

	if (argc != 2)
	{
		fprintf(stderr, "Usage: Factor <filename>\n");
		exit(EXIT_FAILURE);
	}

	file_ptr = fopen(argv[1], "r");
	if (file_ptr == NULL)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}

	while ((linesize = getline(&linebuffer, &buffer_size, file_ptr)) != -1)
	{
		factorizer(linebuffer);
	}
	return (0);
}
