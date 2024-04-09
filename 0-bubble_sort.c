/*
 * File: 0-bubble_sort.c
 * Auth: Gabriel Morffe, Agustin Rodriguez
 */

#include "sort.h"

/**
 * bubble_sort - function that sorts an array of integers in ascending
 *                  order using the Bubble sort algorithm
 * @array: array of numbers.
 * @size: size of array.
 * Return: Always 0 (Success)
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	int aux;

	if (!array || !size)
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
