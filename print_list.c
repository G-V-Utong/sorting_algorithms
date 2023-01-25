#include <stdio.h>
#include "sort.h"

/**
 * print_list - Prints a list of integers.
 * @list: The list to be printed.
 */
void print_list(const listint_t *list)
{
	int i = 0;

	while (list != NULL)
	{
		if (i > 0)
			printf(", ");
		printf("%d", list->n);
		++i;
		list = list->next;
	}
	printf("\n");
}
