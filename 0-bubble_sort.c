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
	size_t i;
	int pass = 0;
	int temp = 0;
	int unsorted = TRUE;

	/* Traversing the array */
	while (unsorted)
	{
		unsorted = FALSE;
		/* Comparing elements */
		for (i = 0; i < (size - 1 - pass); i++)
		{
			/* Swapping elements */
			if (array[i] > array[i + 1])
			{
				temp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = temp;
				unsorted = TRUE;
				print_array(array, size);
			}
		}
		pass += 1;
	}
}
