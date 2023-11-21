#include "sort.h"

/**
 * swap - Swap two integers x and y
 * @x: integer 1
 * @y: integer 2
 *
 * Return: void
 */
void swap(int *x, int *y)
{
	int tmp;

	tmp = *x;
	*x = *y;
	*y = tmp;
}


/**
 * lomuto_sort - Lomuto partition scheme
 * @array: THe arrayof integers
 * @size: Array size
 * @left: The starting index of the array partition to order
 * @right: The ending index of the array partition to order
 *
 * Return: None
 */
void lomuto_sort(int *array, size_t size, int left, int right)
{
	int *pivot, above, below, part;

	if (right - left > 0)
	{
		pivot = array + right;
		for (above = below = left; below < right; below++)
		{
			if (array[below] < *pivot)
			{
				if (above < below)
				{
					swap(array + below, array + above);
					print_array(array, size);
				}
				above++;
			}
		}

		if (array[above] > *pivot)
		{
			swap(array + above, pivot);
			print_array(array, size);
		}

		part = above;
		lomuto_sort(array, size, left, part - 1);
		lomuto_sort(array, size, part + 1, right);
	}
}

/**
 * quick_sort - Function that sorts array of
 * int w/ quicksort algorithm
 * @array: integer array
 * @size: Array size
 *
 * Return: None
 */
void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;

	lomuto_sort(array, size, 0, size - 1);
}
