#include "monty.h"
/*
*/void _pint(stack_t **stack, unsigned int line_number)
{
(void)line_number;
printf("%d\n", (*stack)->n);
}

/*
*/void _pop(stack_t **stack, unsigned int line_number)
{
stack_t *new = *stack;
(void)line_number;
*stack = (*stack)->next;
if (*stack)
(*stack)->prev = NULL;
new->next = NULL;
new->prev = NULL;
free(new);
}

/*
*/void _swap(stack_t **stack, unsigned int line_number)
{
int tmp;
(void)line_number;
tmp = (*stack)->n;
(*stack)->n = (*stack)->next->n;
(*stack)->next->n = tmp;
}

/*
*/void _add(stack_t **stack, unsigned int line_number)
{
stack_t *new = NULL;
int total = 0;
(void) line_number;
total = (*stack)->n + (*stack)->next->n;
new = *stack;
*stack = (*stack)->next;
(*stack)->n = total;
(*stack)->prev = NULL;
new->next = NULL;
free(new);
}

/*
*/void _nop(stack_t **stack, unsigned int line_number)
{
(void)stack;
(void)line_number;
}