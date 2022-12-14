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
 * selection_sort - Sort an arrray using selection sort algorithm
 * @array: array to be sorted
 * @size: length of the array
 * Return: nothing
 */

void selection_sort(int *array, size_t size)
{
	size_t i, j;

	if (array == NULL || size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		size_t min = i;

		for (j = i + 1; j < size; j++)
			if (*(array + j) < *(array + min))
				min = j;
		if (min != i)
		{
			compexch((array + min), (array + i));
			print_array(array, size);
		}
	}
}
