#include "sort.h"

/**
 * *bubble _sort: a function which sorts elements of array from min to max
 * @size: size of array
 * @array: the array
 *
 */
void bubble_sort(int *array, size_t size)
{
	tempo =0, size_t i, position;

	if (size<2)
		return;
	for (i=0; i <size; i++)
		for (position = 0; position <size; position++)
		{
			if (array[position + 1] && array[position] > array[position + 1]
			{
			tempo = array[position];
			array[position] = array[position + 1];
			array[position + 1] = tempo;
			print_array(array, size);
			}
		}
}

