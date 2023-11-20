#include "sort.h"

/**
 * selection_sort - a function that sorts/separate
 * an array of integers in ascending order
 * @array: a list of numbers
 * @size: the size of the array
 *
 */

void selection_sort(int *array, size_t size)
{
	size_t i, pos, tmp;
	int swap, flag = 0;

	if (array == NULL)
		return;
	for (i = 0; i < size; i++)
	{
		flag = 0;
		tmp = i;
		for (pos = i + 1; pos < size; pos++)
		{
			if (array[tmp] > array[pos])
			{
				tmp = pos;
				flag = flag + 1;
			}
		}
		swap = array[i];
		array[i] = array[tmp];
		array[tmp] = swap;
		if (flag != 0)
			print_array(array, size);
	}
}
