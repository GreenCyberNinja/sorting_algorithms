#include "sort.h"
/**
*
*
*
*
*
*
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
*
*
*
*
*
*/
void swap(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
