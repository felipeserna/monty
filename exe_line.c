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
	/*char *line = NULL;*/

	printf("0");
	while (read_f() != EOF)
	{printf("1\n");
		line_number += 1;
		tk = strtok(mont.buffer, " \t\n");
		select = get_opcode(tk, line_number);
		if (select)
		{printf("2\n");
			mont.num = strtok(NULL, " \t\n");
			printf("mont numn %s\n", mont.num);
			select(&(head), line_number);
		}
		free(mont.buffer);
		printf("\n");
	}
	close_f();
}
