#include "monty.h"
/**
 * pall_s - prints the stack, starting from the top of the stack.
 * @stack: stack
 * @line_number: line number
 * Return: void
 */
void pall_s(stack_t **stack, unsigned int line_number)
{
	stack_t *h = *stack;

	(void)line_number;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
}
