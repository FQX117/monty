#include "monty.h"
/*
*/void err1(stack_t **stack, unsigned int line_number, FILE *m_file, int x)
{
int exe = 0;
/* Pint */
if (x == 2)
{
if (!*stack)
{
fprintf(stderr, "L%d: can't pint, stack empty\n", line_number);
exe = 1;
}
}
/* Pop */
else if	 (x == 3)
{
if (!*stack)
{
fprintf(stderr, "L%d: can't pop an empty stack\n", line_number);
exe = 1;
}
}
if (exe == 0)
exe = err2(stack, line_number, x);
{
free_all(*stack);
fclose(m_file);
exit(EXIT_FAILURE);
}
}

/*
*/int err2(stack_t **stack, unsigned int line_number, int i)
{
/* Swap */
if (i == 4)
{
if (!*stack || !(*stack)->next)
{
fprintf(stderr, "L%d: can't swap, stack too short\n", line_number);
return (1);
}
}
/* Add */
else if (i == 5)
{
if (!*stack || !(*stack)->next)
{
fprintf(stderr, "L%d: can't add, stack too short\n", line_number);
return (1);
}
}
return (0);
}
