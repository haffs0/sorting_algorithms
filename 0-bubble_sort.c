#include "sort.h"

/**
 * compexch - compare and exchange the array content by index
 * @array: array to compare and exchange content
 * @l: first index
 * @h: second index
 * Return: nothing
 */

void compexch(int *array, int l, int h)
{
	int temp, idx1, idx2;

	idx1 = *(array + l);
	idx2 = *(array + h);

	if (idx1 > idx2)
	{
		temp = idx1;
		*(array + l) = idx2;
		*(array + h) = temp;
	}
}

/**
 * bubble_sort - Sort an arrray using bubble sort algorithm
 * @array: array to be sorted
 * @size: length of the array
 * Return: nothing
 */

void bubble_sort(int *array, size_t size)
{
	size_t i, j;

	for (i = 0; i < size; i++)
	{
		for (j = size - 1; j > i; j--)
		{
			compexch(array, j - 1, j);
			print_array(array, size);
		}
	}
}
