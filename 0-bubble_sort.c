#include "sort.h"
/**
 * bubble_sort - Entry point
 * @array: int
 * @size: size_t
 *
 * Return: Always 0
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	int aux;

	if (array == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				aux = array[j + 1];
				array[j + 1] = array[j];
				array[j] = aux;
				print_array(array, size);
			}
		}
	}
}
