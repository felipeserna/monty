#include "monty.h"

void push_s(stack_t **stack, unsigned int line_number)
{
	stack_t *new_s = NULL;
	int num = atoi(mont.num);

	new_s = malloc(sizeof(stack_t));
	if (new_s == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}
	if (num == 0)
	{
		fprintf(stderr, "L%d: usage: push integer\n",line_number);
		exit(EXIT_FAILURE);
	}
	new_s->n = num;
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
	printf ("ESTOY EN PUSH");

}
