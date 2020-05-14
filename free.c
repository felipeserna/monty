#include "monty.h"

/**
 * free_s - function that frees a list.
 * @head: first item in the list
 */

void free_s(stack_t *head)
{
	stack_t *tmp, *auxn;

	tmp = head;

	while (tmp != NULL)
	{
		auxn = tmp->next;
		free(tmp);
		tmp = auxn;
	}
}
