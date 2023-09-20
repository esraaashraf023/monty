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

	k = (*stack)->k;
	(*stack)->k = (*stack)->next->k;
	(*stack)->next->k = k;
}
/**
 * add - function that sums
 *
 * @stack: Pointer.
 * @line_number: ..
 *
 * Return: void.
 */
void n_sub(stack_t **stack, unsigned int line_number)
{
	int sm;

	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	sm = (*stack)->k + (*stack)->next->k;
	mon_pop(stack, line_number);
	(*stack)->k = sum;
}
