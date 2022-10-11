#include "sort.h"

/**
 * compexch - compare and exchange the array content by index
 * @l: first pointer
 * @h: second pointer
 * Return: nothing
 */

void compexch(int *l, int *h)
{
	int temp = *l;
	*l = *h;
	*h = temp;
}

/**
 * partition - partition an array
 * @array: a pointer to an array
 * @size: array size
 * @low: the starting index
 * @high: the ending index
 * Return: an integer
 */

int partition(int *array, size_t size, int low, int high)
{
	int pivot = *(array + high);
	int j, i;

	for (j = i = low; i < high; i++)
	{
		if (*(array + i) < pivot)
		{
			if (j < i)
			{
				compexch((array + i), (array + j));
				print_array(array, size);
			}
			j++;
		}
	}
	if (*(array + j) > pivot)
	{
		compexch((array + j), (array + high));
		print_array(array, size);
	}
	return (j);
}

/**
 * lomuto_sort - implement quick sort algorithm through recursion
 * @array: array of integer to be sort
 * @size: The size of the array
 * @low: the start index
 * @high: the ending index
 * Return: nothing
 */

void lomuto_sort(int *array, size_t size, int low, int high)
{
	if (low < high)
	{
		int pi = partition(array, size, low, high);

		lomuto_sort(array, size, low, pi - 1);
		lomuto_sort(array, size, pi + 1, high);
	}
}

/**
 * quick_sort - Sort an arrray using quick sort algorithm
 * @array: array to be sorted
 * @size: length of the array
 * Return: nothing
 */

void quick_sort(int *array, size_t size)
{

	if (array == NULL || size < 2)
		return;
	lomuto_sort(array, size, 0, size - 1);
}
