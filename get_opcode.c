#include "monty.h"


void (*get_opcode(char *s, unsigned int l))(stack_t **stack, unsigned int line_number)
{
	int i = 0;
	instruction_t op[] = {
		{"push", push_s},
		{NULL, NULL}
	};

	while (op[i].opcode != NULL)
	{
		if ((strcmp(s, op[i].opcode)) == 0)
		{
			return (op[i].f);
		}
		i++;
	}

	if (op[i].opcode == NULL)
	{
		fprintf(stderr,"L%d: unknown instruction %s\n", l, s);
		exit(EXIT_FAILURE);
	}
	return NULL;
}
