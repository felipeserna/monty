#include "monty.h"
/**
 * sub_s - subtracts the top element from the second top element of the stack.
 * @stack: stack
 * @ln: line number
 * Return: void
 */
void sub_s(stack_t **stack, unsigned int ln)
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
		fprintf(stderr, "L%d: can't sub, stack too short\n", ln);
		exit(EXIT_FAILURE);
	}

	num1 = (*stack)->n;
	num2 = (*stack)->next->n;
	(*stack)->next->n = num2 - num1;

	tmp = (*stack)->next;
	free(*stack);
	tmp->prev = NULL;
	(*stack) = tmp;
}
