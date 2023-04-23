#include "sort.h"

/**
 * bubble_sort - Sorts an array using the bubble sort algorithm.
 * @array: The array to sort.
 * @size: The length of the array.
 */
void bubble_sort(int *array, size_t size)
{
	size_t j;
	int tmp, pass = 0, unsorted = 1;

	while(unsorted)
	{
		unsorted = 0;
		for (j = 0; j < size - 1 - pass; j++)
		{
			if (array[j + 1] < array[j])
			{
				SWAP(array, j, j + 1);
				unsorted = 1;
				print_array(array, size);
			}
		}
		pass += 1;
	}
}
