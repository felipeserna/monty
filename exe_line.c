#include "monty.h"
/**
 * exe_line - executes a line
 * @
 * Return:
 */
void exe_line(void)
{
	int i = 0;
	char *tk = NULL;
	/*char *line = NULL;*/

	while (read_f() != EOF)
	{
		tk = strtok(line, " \t\n");
		i = 0;
		while (tk != NULL && i < 2)
		{
			printf("%s", tk);
			tk = strtok(NULL, " \t\n");
			i++;
		}
	}
	close_f();
}
