#include "monty.h"

/**
 * exe_line - executes a line
 * @
 * Return:
 */
void exe_line(void)
{

	char *tk = NULL;
	unsigned int line_number = 0;
	stack_t *head = NULL;
	void (*select)(stack_t **stack, unsigned int line_number);

	while (read_f() != EOF)
	{
		line_number += 1;
		tk = strtok(mont.buffer, " \t\n");
		if (tk && tk[0] != '#')
		{
			select = gt(&(head), tk, line_number);
			if (select)
			{
				mont.num = strtok(NULL, " \t\n");
				select(&(head), line_number);
			}
		}
		free(mont.buffer);
	}
	free_s(head);
	close_f();
}
