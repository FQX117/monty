#include "monty.h"
/*
*/void _pint(stack_t **stack, unsigned int line_number)
{
(void)line_number;
if (!stack || !*stack)
printf("L%u: %s", n, "can't pint, stack empty\n");
exit(EXIT_FAILURE);
printf("%d\n", (*stack)->n);
}

/*
*/void _pop(stack_t **stack, unsigned int line_number)
{
stack_t *new;
(void)line_number;
if (*stack == NULL)
printf("L%u: %s", n, "can't pop an empty stack");
exit(EXIT_FAILURE);
if ((*stack)->next != NULL)
{
new = (*stack)->next;
new->prev = NULL;
free(*stack);
*stack = new;
}
else
{
free(*stack);
*stack = NULL;
}
}

/*
*/void _swap(stack_t **stack, unsigned int line_number)
{
int tmp;
(void)line_number;
if (!stack || !*stack || !(*stack)->next)
printf("L%u: %s", n, "can't swap, stack too short");
exit(EXIT_FAILURE);
tmp = (*stack)->n;
(*stack)->n = (*stack)->next->n;
(*stack)->next->n = tmp;
}

/*
*/void _add(stack_t **stack, unsigned int line_number)
{
int total;
if (*stack == NULL || (*stack)->next == NULL)
printf("L%u: %s", n, "can't add, stack too short");
exit(EXIT_FAILURE);
total = (*stack)->n + (*stack)->next->n;
_pop(stack, line_number);
(*stack)->n = total;
}

/*
*/void _nop(stack_t **stack, unsigned int line_number)
{
(void)stack;
(void)line_number;
}