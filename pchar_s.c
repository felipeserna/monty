#include "monty.h"
/**
 * pchar_s - prints the char at the top of the stack, followed by a new line.
 * @stack: stack
 * @line_number: line number
 * Return: void
 */
void pchar_s(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp;

	tmp = *stack;

	if (tmp == NULL)
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}

	if (tmp->n < 0 || tmp->n > 127)
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", line_number);
		exit(EXIT_FAILURE);
	}
	printf("%c\n", tmp->n);
}
