#include "sort.h"
/**
* selection_sort - sorts using the selection algorithm
* @array: array to be sorted
* @size: size of array
*/
void selection_sort(int *array, size_t size)
{
	size_t ind, chk, swp;

	for (ind = 0; ind < size; ind++)
	{
		for (chk = ind + 1; chk < size; chk++)
		{
			if (array[ind] > array[chk])
			{
				swp = array[ind];
				array[ind] = array[chk];
				array[chk] = swp;
			}
		}
		print_array(array, size);
	}
}
