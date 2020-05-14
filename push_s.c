#include "monty.h"
/**
 * push_s - pushes an element to the stack
 * @stack: stack
 * @line_number: line number
 * Return: void
 */
void push_s(stack_t **stack, unsigned int line_number)
{
	stack_t *new_s = NULL;

	new_s = malloc(sizeof(stack_t));
	if (new_s == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}
	if (mont.num == NULL)
	{
		fprintf(stderr, "L%d: usage: push integer\n", line_number);
		free(new_s);
		close_f();
		exit(EXIT_FAILURE);
	}
	new_s->n = atoi(mont.num);
	new_s->prev = NULL;

	if (*stack == NULL)
	{
		new_s->next = NULL;
	}
	else
	{
		new_s->next = *stack;
		(*stack)->prev = new_s;
	}
	*stack = new_s;

}
