#include "monty.h"
/*
*/void _pall(stack_t **stack, unsigned int line_number)
{
stack_t *clone = *stack;
(void)line_number;
for (; clone; clone = clone->next)
printf("%d\n", clone->n);  
}

/*
*/void _push(stack_t **stack, unsigned int line_number)
{
stack_t *new;
(void)line_number;
new = malloc(sizeof(stack_t));
if (!new)
{
exit(2);
}
new->n = n;
new->next = NULL;
new->prev = NULL;
if (*stack)
{
(*stack)->prev = new;
new->next = *stack;
}
*stack = new;
}
