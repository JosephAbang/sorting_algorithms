#include "sort.h"
#include <stdio.h>


/**
 * selection_sort - sorts an array of integers using Selection sort
 * @array: unsorted array
 * @size: size of array
 * Return: void
 **/

void selection_sort(int *array, size_t size)
{
	int temp;
	size_t i = 0, j, min;

	for (i = 0; i < size - 1; i++)
	{
		min = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min])
				min = j;
		}
		if (min != i)
		{
			temp = array[i];
			array[i] = array[min];
			array[min] = temp;
			print_array(array, size);
		}
	}
}
