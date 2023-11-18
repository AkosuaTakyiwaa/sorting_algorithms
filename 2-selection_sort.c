#include "sort.h"

/**
 * selection_sort: a function that sorts/separate an array of integers in ascending order
 * @array: a list of numbers
 * @size: the size of the array
 *
 */
 void selection_sort(int *array, size_t size)
{
	size_t i, position;
	int swap, flag = 0, tempo

	if (array == NULL)
		return;
	for (i - 0, i < size; i++)
	{
		flag = 0;
		tempo = i;
		for (position = i + 1; position < size; position++)
		{
			if (array[empo] > array[position])
			{
				tempo = position;
				flag = flag + 1;
			}
		}
		swap = array[i]
		array[i] = array[tempo];
		array[tempo] = swap;
		if (flag != 0)
			print_array(array, size);
	
	}
}
