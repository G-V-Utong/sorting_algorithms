#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "sort.h"

#ifndef TRUE
#define TRUE 1
#endif

#ifndef FALSE
#define FALSE 0
#endif

/**
 * bubble_sort - a sorting algorithm based on Bubble sort
 * @array: array to be sorted
 * @size: size of the array
 *
 * Return: nothing
 */

void bubble_sort(int *array, size_t size)
{
	size_t i, iter, new_size;
	int temp = 0;
	int unsorted = TRUE;

	iter = size - 1;

	/* Traveersing the array */
	while (unsorted)
	{
		unsorted = FALSE;
		/* Comparing elements */
		for (i = 0; i < iter; i++)
		{
			/* Swapping elements */
			if (array[i] > array[i + 1])
			{
				temp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = temp;
				unsorted = TRUE;
				new_size = i;
				print_array(array, size);
			}
		}
		iter = new_size;
	}
}
