#include "monty.h"

/**
 * add_node - function that adds a new node.
 *
 * @stack: Pointer.
 * @n: Valu.
 *
 * Return: 0
 */
stack_t *add_node(stack_t **stack, int n)
{
	stack_t *new_node, *last;

	new_node = malloc(sizeof(stack_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;

	if (*stack == NULL)
	{
		*stack = new_node;
	}
	else
	{
		last = *stack;

		while (last->next != NULL)
			last = last->next;

		last->next = new_node;
		new_node->prev = last;
	}

	return (new_node);
}
