#include "sort.h"

/**
 * shell_sort - Sorts an array using the shell sort algorithm.
 * @array: The array to sort.
 * @size: The length of the array.
 */
void shell_sort(int *array, size_t size)
{
	int i, j, tmp, gap = 0;

	if ((array == NULL) || (size < 2))
		return;
	while (gap <= ((int)size / 3))
		gap = (gap * 3) + 1;
	for (; gap > 0; )
	{
		for (i = gap; i < (int)size; i++)
		{
			tmp = array[i];
			for (j = i; (j >= gap) && (array[j - gap] > tmp); j -= gap)
			{
				array[j] = array[j - gap];
			}
			array[j] = tmp;
		}
		gap = (gap - 1) / 3;
		print_array(array, size);
	}
}
