#include "monty.h"
/**
 * main - main function
 * @argc: argument counter
 * @argv: argument vector
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	(void)argc;

	open_f(argv[1]);
	exe_line();

	return (0);
}
