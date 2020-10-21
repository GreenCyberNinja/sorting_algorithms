#include "sort.h"
void swap(int *a, int *b);
/**
* selection_sort - sorts using the selection algorithm
* @array: array to be sorted
* @size: size of array
*/
void selection_sort(int *array, size_t size)
{
	size_t ind, chk, swp;

	for (ind = 0; ind < size - 1; ind++)
	{
		swp = ind;
		for (chk = ind + 1; chk < size; chk++)
		{
			if (array[chk] < array[swp])
			{
				swp = chk;
			}
		}
		swap(&array[swp], &array[ind]);
		print_array(array, size);
	}
}
/**
*
*
*
*
*/
void swap(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
