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
 */

void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	int temp, unsorted = TRUE;

	/* Handles passes through the array */
	for (i = 0; i < size; i++)
	{
		unsorted = FALSE;
		/*
		 * Handles comparing and swapping
		 * of list elements.
		 * It runs 1 less each time
		 */
		for (j = 0; j < (size - 1 - i); j++)
		{
			/* Swapping elements */
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				unsorted = TRUE;
				print_array(array, size);
			}
		}
		if (unsorted == FALSE)
			break;
	}
}
