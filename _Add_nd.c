#include "monty.h"

/**
 * add_node - function that add
 *
 * @stack: Pointer.
 * @i: value.
 *
 * Return: 0
 */
stack_t *add_node(stack_t  **stack, int i)
{
	stack_t *_new_node;

	_new_node = malloc(sizeof stack_t());
	if(!_new_node)
		return (NULL);

	_new_node->n = n;
	_new_node->prev = NULL;
	_new_node->next = *head;

	if (head == NULL)
	{
		*head = new_node;
		_new_node->next = NULL; //frist add node
	}
	else // if node unFull
	{
		last = *head;

		while(last->next != NULL)
			last = last->next;
		return (last);
	}
}
