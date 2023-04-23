#include "sort.h"

/**
 * bubble_sort - Sorts an array using the bubble sort algorithm.
 * @array: The array to sort.
 * @size: The length of the array.
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	int tmp, unsorted = 1;

	for (i = 0; i < size; i++)
	{
		unsorted = 0;
		for (j = 0; j < size - 1 - i; j++)
		{
			if (array[j + 1] < array[j])
			{
				SWAP(array, j, j + 1);
				unsorted = 1;
				print_array(array, size);
			}
		}
		/*Exits loop if array is sorted before full iteration*/
		if (unsorted == 0)
			break;
	}
}
