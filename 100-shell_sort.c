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
 * shell_sort - Function to sort array of integers in ascending order
 * using shell sort algorithm, using Knuth sequence
 * @array: The array
 * @size: The array size
 *
 * Return: None
 */
void shell_sort(int *array, size_t size)
{
	size_t n, i, j;

	if (array == NULL || size < 2)
		return;

	for (n = 1; n < (size / 3);)
		n = n * 3 + 1;

	for (; n >= 1; n /= 3)
	{
		for (i = n; i < size; i++)
		{
			j = i;
			while (j >= n && array[j - n] > array[j])
			{
				swap(array + j, array + (j - n));
				j -= n;
			}
		}
		print_array(array, size);
	}
}
