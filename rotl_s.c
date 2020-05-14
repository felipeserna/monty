#include "monty.h"
/**
 * rotl_s -  rotates the stack to the top.
 * @stack: stack
 * @line_number: line number
 * Return: void
 */
void rotl_s(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp = NULL, *tmp2 = NULL;
	int num1 = 0;
	(void)line_number;

	if (*stack)
	{
		tmp = *stack;
		tmp2 = tmp->next;
		num1 = tmp->n;

		while (tmp->next)
		{
			tmp->n = tmp2->n;
			tmp = tmp2;
			tmp2 = tmp->next;
		}
		tmp->n = num1;
	}
}
