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
		{"add", add},
		{"nop", nop},
		{"sub", sub},
		{"div", div_t},
		{"mul", mul_op},
		{"mod", mon_pop},
		{"pchar", pchar_op},
		{"pstr", pstr_pop},
		{NULL, NULL}};
	int i;

	for (i = 0; instructions[i].opcode != NULL; i++)
	{
		if (strcmp(opcode, instructions[i].opcode) == 0)
			return (&instructions[i]);
	}

	return (NULL);
}
