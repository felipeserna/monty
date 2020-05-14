#include "monty.h"
/**
 * pint_s - prints the value at the top of the stack
 * @stack: stack
 * @line_number: line number
 * Return: void
 */
void pint_s(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp;

	tmp = *stack;

	if (tmp == NULL)
	{
		fprintf(stderr, "L%d: can't pint, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", tmp->n);
}
