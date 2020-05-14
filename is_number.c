#include "monty.h"
/**
 * is_number - Verify if opcode is a number
 * Return: 0 or 1
 */
int is_number(void)
{
	int i;

	for (i = 0; mont.num[i]; i++)
	{
		if (mont.num[i] == '-' && i == 0)
			continue;
		if (isdigit(mont.num[i]) == 0)
			return (1);
	}
	return (0);
}
