#include "sort.h"
void swap(int *a, int *b);
void quick(int *arr, size_t lo, size_t hi, size_t size);
int partition(int *arr, size_t lo, size_t hi, size_t size);
/**
* quick_sort - sorts using the quick algo
* @array: array to be sorted
* @size: size of array
*/
void quick_sort(int *array, size_t size)
{
	quick(array, 0, size - 1, size);
}
/**
* quick - the recursion part
* @arr:  what pirates say
* @lo: how i feel
* @hi: i wish
* @size: immensenly proprtionate to my love of pasta
*/
void quick(int *arr, size_t lo, size_t hi, size_t size)
{
	size_t p;

	if (lo >= hi)
		return;
	p = partition(arr, lo, hi, size);
	if (p != 0)
		quick(arr, lo, p - 1, size);
	quick(arr, p + 1, hi, size);
}
/**
* partition - to part the array sea
* @arr: array to be parsed
* @lo: lo end of array
* @hi: hi end of the array
* @size: size of the array
* Return: returns i
*/
int partition(int *arr, size_t lo, size_t hi, size_t size)
{
	size_t i, j;
	int pivot;

	pivot = arr[hi];
	i = lo;
	for (j = lo; j <= hi; j++)
	{
		if (arr[j] < pivot)
		{
			if (arr[j] != arr[i])
			{
				swap(&arr[i], &arr[j]);
				print_array(arr, size);
			}
			i++;
		}
	}
	if (arr[i] != arr[hi])
	{
		swap(&arr[i], &arr[hi]);
		print_array(arr, size);
	}
	return (i);
}
/**
* swap - to swap int pointers
* @a: to be swapped with b
* @b: to be swapped with a
*/
void swap(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
