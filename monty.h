#ifndef MONTY_H
#define MONTY_H
#define LIMITERS " ,!?\'\"\t\n\r"

/*libraies*/
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <limits.h>
#include <string.h>
#include <ctype.h>

/*macros*/
#define stderr stderr
/*global variable*/
int n;
/*
*/typedef struct stack_s
{
        int n;
        struct stack_s *prev;
        struct stack_s *next;
} stack_t;

/*
*/typedef struct instruction_s
{
        char *opcode;
        void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

/*prototypes*/
void _pall(stack_t **stack, unsigned int line_number);
void _push(stack_t **stack, unsigned int line_number);
void _pint(stack_t **stack, unsigned int line_number);
void _pop(stack_t **stack, unsigned int line_number);
void _swap(stack_t **stack, unsigned int line_number);
void _nop(stack_t **stack, unsigned int line_number);
void _add(stack_t **stack, unsigned int line_number);
void err1(stack_t **stack, unsigned int line_number, FILE *m_file, int x);
int err2(stack_t **stack, unsigned int line_number, int i);
void parse_execute(FILE *monty_file, instruction_t instructions[]);
void free_all(stack_t *stack);

#endif