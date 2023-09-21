#include "monty.h"

/**
 * get_instruction - ....
 *
 * @opcode: string command.
 *
 * Return: NULL.
 */
instruction_t *get_instruction(char *opcode)
{
	static instruction_t instructions[] = {
		{"push", mon_push},
		{"pall", _pall},
		{"pint", mon_pint},
		{"pop", mon_pop},
		{"swap", swap},
		{"add", add_node},
		{NULL, NULL}};
	int i;

	for (i = 0; instructions[i].opcode != NULL; i++)
	{
		if (strcmp(opcode, instructions[i].opcode) == 0)
			return (&instructions[i]);
	}

	return (NULL);
}
