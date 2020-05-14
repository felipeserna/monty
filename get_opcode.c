#include "monty.h"
/**
 * gt- gets the function
 * @s: string
 * @l: line number for get_opcode
 * @h: head of stack
 * Return: void
 */
void (*gt(stack_t **h, char *s, unsigned int l))(stack_t **sk, unsigned int ln)
{
	int i = 0;
	instruction_t op[] = {
		{"push", push_s},
		{"pall", pall_s},
		{"pint", pint_s},
		{"pop", pop_s},
		{"swap", swap_s},
		{"add", add_s},
		{"nop", nop_s},
		{"sub", sub_s},
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
		free_s(*h);
		close_f();
		exit(EXIT_FAILURE);
	}
	return (NULL);
}
