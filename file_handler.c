#include "monty.h"
/**
 * open_f - opens a file
 * @file_name: file name
 * Return: void
 */
void open_f(char *file_name)
{
	mont.each_file = fopen(file_name, "r");
	if (mont.each_file == NULL)
	{
		fprintf(stderr, "Error: Can't open file %s\n", file_name);
		exit(EXIT_FAILURE);
	}
}
/**
 * read_f - reads a file
 * Return: number of characters
 */
int read_f(void)
{
	size_t len_buffer = 0;
	size_t char_num = 0;

	char_num = getline(&(mont.buffer), &len_buffer, mont.each_file);
	return (char_num);
}
/**
 * close_f - closes a file
 * Return: void
 */
void close_f(void)
{
	if (mont.each_file)
		fclose(mont.each_file);

	if (mont.buffer)
		free(mont.buffer);
}
