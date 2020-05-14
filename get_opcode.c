#include "monty.h"
/**
 * get_opcode - gets the function
 * @s: string
 * @l: line number for get_opcode
 * Return: void
 */
void (*get_opcode(stack_t **head, char *s, unsigned int l))(stack_t **stack, unsigned int ln)
{
	int i = 0;
	instruction_t op[] = {
		{"push", push_s},
		{"pall", pall_s},
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
		fprintf(stderr, "L%d: unknown instruction %s\n", l, s);
		free_s(*head);
		close_f();
		exit(EXIT_FAILURE);
	}
	return (NULL);
}
