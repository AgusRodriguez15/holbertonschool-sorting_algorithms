/*
* File: 3-quick_sort.c
* Auth: Gabriel Morffe,Agustin Rodriguez
*/

#include "sort.h"

/**
 * swap_quick_sort - auxiliary recursive function to swap pivot
 * @array: array to sort
 * @start: start of @array
 * @end: end of @array
 * @size: size of @array
 */
void swap_quick_sort(int *array, size_t start, size_t end, size_t size)
{
	size_t i, j;
	int pivot, temp;

	if (!array || end < start)
		return;

	pivot = array[end];
	j = start;

	for (i = start; i < end; i++)
	{
		if (array[i] < pivot)
		{
			if (array[i] != array[j])
			{
				temp = array[i];
				array[i] = array[j];
				array[j] = temp;
				print_array(array, size);
			}
		j++;
		}
	}

	if (array[i] != array[j])
	{
		temp = array[j];
		array[j] = array[i];
		array[i] = temp;
		print_array(array, size);
	}

	if (j > 0)/*mini array menor que pivot que está en pos j*/
		swap_quick_sort(array, start, j - 1, size);
	/*mini array mayor que pivot que está en pos j*/
	swap_quick_sort(array, j + 1, end, size);

}
/**
 * quick_sort - function that sorts an array of integers in
 *			ascending order using the Quick sort algorithm
 * @array: array to sort
 * @size: size of @array
 */
void quick_sort(int *array, size_t size)
{
	if (!array || !size)
		return;
	swap_quick_sort(array, 0, size - 1, size);
}


