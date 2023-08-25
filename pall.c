#include "monty.h"
#include <stdio.h>
#include <stddef.h>
/**
 * pall - prints all elements of the stack
 * @stack: data structure
 * @line_number: no use 
 * Return: nothing 
 */

void pall(stack_t **stack, unsigned int line_number)
{
stack_t *i;
UNUSED(line_number);
i = NULL;
while(i != NULL)
{
printf("%d\n", i->n)
i = i->next;
}

}
