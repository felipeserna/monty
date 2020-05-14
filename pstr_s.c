#include "monty.h"
/**
 * pstr_s - prints the string starting at the top of the stack
 * @stack: stack
 * @line_number: line number
 * Return: void
 */
void pstr_s(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp;
	int i;

	(void)line_number;

	tmp = *stack;

	if (tmp == NULL)
	{
		printf("\n");
	}

	for (i = 0; tmp; i++)
	{
		if (tmp->n > 64 && tmp->n < 127)
		{
			printf("%c", tmp->n);
			tmp = tmp->next;
			continue;
		}
		break;
	}
	printf("\n");
}
