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
 * bubble_sort - Sort an arrray using bubble sort algorithm
 * @array: array to be sorted
 * @size: length of the array
 * Return: nothing
 */

void bubble_sort(int *array, size_t size)
{
	size_t i, j;

	if (array == NULL || size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		for (j = 0; j < size - i - 1 ; j++)
		{
			if (*(array + j) > *(array + j + 1))
			{
				compexch((array + j), (array + j + 1));
				print_array(array, size);
			}
		}
	}
}
