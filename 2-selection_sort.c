#include <stddef.h>
#include "sort.h"
/**
  * selection_sort - sorts using selection sort
  * @array: array of integers
  * @size: size of array
  */
void selection_sort(int *array, size_t size)
{
	size_t step, min_idx, i;

	for (step = 0; step < size - 1; step++)
	{
		min_idx = step;
		for (i = step + 1; i < size; i++)
		{
			if (array[i] < array[min_idx])
			{
				min_idx = i;
			}
		}
		if (min_idx != step)
		{
			int temp = array[min_idx];

			array[min_idx] = array[step];
			array[step] = temp;
			print_array(array, size);
		}
	}
}
