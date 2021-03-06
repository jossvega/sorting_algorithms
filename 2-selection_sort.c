#include "sort.h"
/**
 * selection_sort - selection sort algorithm
 * @array: unordered array
 * @size: array's size
 * Return: void
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, min, swap;

	if (!array || size <= 1)
		return;

	for (i = 0; i < size - 1; i++)
	{
		/*set current element as minimun */
		min = i;

		/*check the element to be the minimum */

		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min])
				min = j;
		}

		/* swap minimum element and current element */
		if (min != i)
		{
			swap = array[min];
			array[min] = array[i];
			array[i] = swap;
			print_array(array, size);
		}
	}
}
