#include "monty.h"

/**
 * _queue - set  format of the data to a queue (FIFO)
 *
 * @doubly: head of the linkedList
 * @cline: line numb;
 * Return: void
 */
void _queue(stack_t **doubly, unsigned int cline)
{
	(void)doubly;
	(void)cline;

	vglo.lifo = 0;
}

/**
 * _stack - set  format for the data to a stack (LIFO)
 *
 * @doubly: head of the linkedList
 * @cline: line numb;
 * Return: void
 */
void _stack(stack_t **doubly, unsigned int cline)
{
	(void)doubly;
	(void)cline;

	vglo.lifo = 1;
}

/**
 * _add - add  top 2 elements of stack
 *
 * @doubly: headthe linkedList
 * @cline: lineNumber;
 * Return: void
 */
void _add(stack_t **doubly, unsigned int cline)
{
	int m = 0;
	stack_t *aux = NULL;

	aux = *doubly;

	for (; aux != NULL; aux = aux->next, m++)
		;

	if (m < 2)
	{
		dprintf(2, "L%u: can't add, stack too short\n", cline);
		free_vglo();
		exit(EXIT_FAILURE);
	}

	aux = (*doubly)->next;
	aux->n += (*doubly)->n;
	_pop(doubly, cline);
}

/**
 * _nop - do nothing
 *
 * @doubly: head  the linkedLlist
 * @cline: lineNumber;
 * Return: void
 */
void _nop(stack_t **doubly, unsigned int cline)
{
	(void)doubly;
	(void)cline;
}

/**
 * _sub - subtract  top element for the second top element of the stack
 *
 * @doubly: head of the linkedList
 * @cline: lineNumber;
 * Return: return void
 */
void _sub(stack_t **doubly, unsigned int cline)
{
	int m = 0;
	stack_t *aux = NULL;

	aux = *doubly;

	for (; aux != NULL; aux = aux->next, m++)
		;

	if (m < 2)
	{
		dprintf(2, "L%u: can't sub, stack too short\n", cline);
		free_vglo();
		exit(EXIT_FAILURE);
	}

	aux = (*doubly)->next;
	aux->n -= (*doubly)->n;
	_pop(doubly, cline);
}
