#include "sort.h"
void swap(int *a, int *b);
/**
* selection_sort - sorts using the selection algorithm
* @array: array to be sorted
* @size: size of array
*/
void selection_sort(int *array, size_t size)
{
	size_t i, swp, j;
	int chk;

	for (i = 0; i < size - 1; i++)
	{
		chk = array[i];
		swp = 0;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < chk)
			{
				chk = array[j];
				swp = j;
			}
		}
		if (swp > 0)
		{
			swap(&array[swp], &array[i]);
			print_array(array, size);
		}
	}
}
/**
* swap - swaps a and b
* @a: to swap with b
* @b: to swap with a
*/
void swap(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
