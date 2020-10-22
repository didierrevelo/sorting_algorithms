#include "sort.h"

/**
* part - Lomutu part scheme for quicksort algorithm
* @a: Array to sort
* @l: lowest index of array
* @h: highest index of array
* Return: index of pivot
*/

int part(int *a, int l, int h)
{
	int hi, x, f, Z;
	static int size, g;

	if (g == 0)
		size = h + 1, g++;
	hi = a[h];
	x = l;
	for (f = l; f < h; f++)
	{
		if (a[f] <= hi)
		{
			if (x != f)
			{
				Z = a[x];
				a[x] = a[f];
				a[f] = Z;
				print_array(a, size);
			}
			x++;
		}
	}
	if (x != h)
	{
		Z = a[x];
		a[x] = a[h];
		a[h] = Z;
		print_array(a, size);
	}

	return (x);
}

/**
* sort - Quicksort recurssive function
* @a: array to sort
* @l: lowest index
* @h: highest index
*/

void sort(int *a, int l, int h)
{
	int hi;

	if (l < h)
	{
		hi = part(a, l, h);
		sort(a, l, hi - 1);
		sort(a, hi + 1, h);
	}
}


/**
* quick_sort - sorts array using quicksort algorithm
* @array: Array to sort
* @size: Size of array to sort
*/

void quick_sort(int *array, size_t size)
{
	if (array == NULL)
		return;
	sort(array, 0, size - 1);
}
