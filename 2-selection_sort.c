#include "sort.h"

/**
* selection_sort - sorts array using selection sort
* @array: array
* @size: Size of array
*/

void selection_sort(int *array, size_t size)
{
	size_t x, j, aa, min;

	if (array == NULL)
		return;

	for (x = 0; x < size - 1; x++)
	{
		min = x;
		for (j = x + 1; j < size; j++)
			if (array[j] < array[min])
				min = j;
		if (min != x)
		{
			aa = array[min];
			array[min] = array[x];
			array[x] = aa;
			print_array(array, size);
		}
	}
}
