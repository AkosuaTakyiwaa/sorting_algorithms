#include "sort.h"

/**
 * bubble_sort - a function which sorts elements
 * of array from min to max
 * @size: size of array
 * @array: the array
 *
 */
void bubble_sort(int *array, size_t size)
{
	size_t tmp = 0, i, j;

	if (size < 2)
		return;

	for (i = 0; i < size; i++)
		for (j = 0; j < size; j++)
		{
			if (array[j + 1] && array[j] > array[j + 1])
			{
				tmp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = tmp;
				print_array(array, size);
			}
		}
}
