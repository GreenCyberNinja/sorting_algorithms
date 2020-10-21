#include "sort.h"
/**
* bubble_sort - sorts using the bubble algorithm
* @array: array to sort
* @size: size of array
*/
void bubble_sort(int *array, size_t size)
{
	size_t x, y;

	for (x = 0; x < size - 1; x++)
		for (y = 0; y < size - x - 1; y++)
			if (array[y] > array[y + 1])
			{
				swap(&array[y], &array[y + 1]);
				print_array(array, size);
			}
}
/**
* swap - swaps the values
* @a: to be swapped with b
* @b: to be swapped with a
*/
void swap(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
