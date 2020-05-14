#include "monty.h"
/**
 * swap_s - swaps the top two elements of the stack.
 * @stack: stack
 * @ln: line number
 * Return: void
 */
void swap_s(stack_t **stack, unsigned int ln)
{
	stack_t *tmp = NULL;
	int elements = 0, num1 = 0, num2 = 0;

	tmp = *stack;

	while (tmp)
	{
		tmp = tmp->next;
		elements++;
	}

	if (elements < 2)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", ln);
		exit(EXIT_FAILURE);
	}

	num1 = (*stack)->n;
	num2 = (*stack)->next->n;
	(*stack)->n = num2;
	(*stack)->next->n = num1;
}
