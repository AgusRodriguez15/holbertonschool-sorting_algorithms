/*
 * File: 2-selection_sort.c
 * Auth: Gabriel Morffe, Agustin Rodriguez
 */

#include "sort.h"

/**
 * selection_sort - function that sorts an array of integers in ascending
 *                  order using the Bubble sort algorithm
 * @array: array of numbers.
 * @size: size of array.
 * Return: Always 0 (Success)
 */
void selection_sort(int *array, size_t size)
{
        size_t i, j, pos;
        int min, aux;

        if (!array || !size)
                return;

        for (i = 0; i < size; i++)
        {
		min = array[i];
		pos = i;
                for (j = i + 1; j < size; j++)
                {
                        if (min > array[j])
                        {
                                min = array[j];
				pos = j;
                        }
                }
		if (pos != i )
		{
		aux = array[i];
		array[i] = min;
		array[pos] = aux;
		print_array(array, size);	
		}

        }
}
