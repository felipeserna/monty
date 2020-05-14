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

	for (i = 0; tmp != NULL; i++)
	{

		if (tmp->n <= 0 || tmp->n > 127)
		{
			break;
		}
		printf("%c", tmp->n);
		tmp = tmp->next;
	}
	printf("\n");
}
