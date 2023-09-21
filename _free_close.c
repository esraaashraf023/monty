#include "monty.h"
/**
 * free_and_close - function that free line
 *
 * @line: bla bla 
 * @file: Pointer to the file.
 *
 * Return: 0
 */
void free_and_close(char *line, FILE *file)
{
	free(line);
	fclose(file);
}
