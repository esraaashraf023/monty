#include "monty.h"

/**
 * mon_push - function that pushes an element.
 *
 * @stack: Pointer
 * @line_number: bla bla
 *
 * Return: void.
 */
void mon_push(stack_t **stack, unsigned int line_number)
{
	char *arg = strtok(NULL, " \n\t");

	if (!arg || !isdigit(*arg))
	{
		fprintf(stderr, "L%d: usage: push integer\n", line_number);
		exit(EXIT_FAILURE);
	}

	if (add_node(stack, atoi(arg)) == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}
}
/**
 * _pall - function that pall.
 * @stack: pointer
 * @line_number: bla bla
 * Return: 0
 */
void _pall(stack_t **stack, __attribute__((unused)) unsigned int line_number)
{
	stack_t *current = *stack;

	if (!current)
		return;

	while (current)
	{
		printf("%d\n", current->n);
		current = current->next;
	}
}
/**
 * mon_pop - function that remove the top element of the stack.
 *
 * @stack: Pointer
 * @line_number: Line number
 *
 * Return: 0
 */
void mon_pop(stack_t **stack, unsigned int line_number)
{
	stack_t *node;

	if (*stack == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", line_number);
		exit(EXIT_FAILURE);
	}

	node = *stack;
	*stack = (*stack)->next;
	free(node);
}
/**
 * mon_pint - function that prints
 *
 * @stack: Pointer
 * @line_number: ..
 *
 * Return: 0
 */
void mon_pint(stack_t **stack, unsigned int line_number)
{
	if (*stack == NULL)
	{
		fprintf(stderr, "L%d: can't pint, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}

	printf("%d\n", (*stack)->n);
}
