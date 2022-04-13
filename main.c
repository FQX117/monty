#include "monty.h"
int main(int argc, char *argv[])
{
FILE *main_file;
instruction_t instructions[] = {
{"push", _push}, {"pall", _pall},
{"pint", _pint}, {"pop", _pop},
{"swap", _swap}, {"add", _add},
{"nop", _nop},
};
if (argc != 2)
{
fprintf(stderr, "USAGE: main file\n");
exit(EXIT_FAILURE);
}
main_file = fopen(argv[1], "r");
if (!main_file)
{
fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
exit(EXIT_FAILURE);
}
parse_execute(main_file, instructions);
fclose(main_file);
return (0);
}

/*
*/void parse_execute(FILE *main_file, instruction_t instructions[])
{
unsigned int line_number = 1;
stack_t *stack = NULL;
char *node = NULL, line[250];
int i, stack_case = 0;
while (fgets(line, sizeof(line), main_file))
{
node = strtok(line, LIMITERS);
if (node)
{
for (i = 0; i < 18; i++)
{
if (strcmp(node, instructions[i].opcode) == 0)
{
if (i == 0)
{
node = strtok(NULL, LIMITERS);
n = atoi(node);
}
err1(&stack, line_number, main_file, i);
if (stack_case == 1 && i == 0)
i = 17;
if (i == 16)
stack_case = 1;
else if (i == 15)
stack_case = 0;
instructions[i].f(&stack, line_number);
}
}
}
line_number++;
}
free_all(stack);
}

/*
*/void free_all(stack_t *stack)
{
	stack_t *delete = NULL;
while (stack)
{
delete = stack;
stack = stack->next;
free(delete);
}
}
