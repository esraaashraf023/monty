#include "monty.h"

/**
 * swap - function that swaps
 *
 * @stack: Pointer
 * @line_number: ..
 *
 * Return: void.
 */
void swap(stack_t **stack, unsigned int line_number)
{
	int k;

	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	k = (*stack)->n;
	(*stack)->n = (*stack)->next->n;
	(*stack)->next->n = k;
}

/**
 * add - function that sums
 *
 * @stack: Pointer.
 * @line_number: ..
 *
 * Return: void.
 */
void add(stack_t **stack, unsigned int line_number)
{
	int sum;

	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	sum = (*stack)->n + (*stack)->next->n;
	mon_pop(stack, line_number);
	(*stack)->n = sum;
}
