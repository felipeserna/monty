#include "monty.h"
own_monty_t mont = {NULL, NULL, NULL};
/**
 * main - main function
 * @argc: argument counter
 * @argv: argument vector
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}

	open_f(argv[1]);
	exe_line();

	return (0);
}
