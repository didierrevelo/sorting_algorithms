#include "sort.h"
/**
 * bubble_sort - this function sort an array\
 * of integers in ascending order using the buble sort.
 *@array: sorting array
 *@size: size of array
 *Return: void
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	int t;

	if (array == NULL)
		return;

	for (i = 0; i < size - 1; i++)
	{
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				t = array[j];
				array[j] = array[j + 1];
				array[j + 1] = t;
				print_array(array, size);
			}
		}
	}
}
