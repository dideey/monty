#include "monty.h"
/**
 * custom_push - adds a numerical element to the series.
 * @series: the series (stack)
 * @line: the current line number
 *
 * Return: void
 */
void custom_push(stack_t **series, unsigned int line)
{
	stack_t *element;
	char *num;

	num = strtok(NULL, DELIMS);
	if (!num)
	{
		fprintf(stderr, "Line %u: Please provide an integer to push.\n", line);
		exit(EXIT_FAILURE);
	}

	element = malloc(sizeof(stack_t));
	if (!element)
	{
		fprintf(stderr, "Error: Failed to allocate memory.\n");
		exit(EXIT_FAILURE);
	}

	element->n = atoi(num);
	element->prev = NULL;
	element->next = *series;

	if (*series)
		(*series)->prev = element;

	*series = element;
}
