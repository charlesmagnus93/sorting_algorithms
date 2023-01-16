#include <stddef.h>
#include "sort.h"
/**
  * partition - partition the array
  * @array: array of integers
  * @low: lowest index
  * @high: highest index
  * @size: size of the array
  * Return: return i, the lowest index
  */

int partition(int *array, int low, int high, size_t size)
{
	int pivot = array[high], i = low, j;
	int temps = array[i];

	for (j = low; j <= high - 1; j++)
	{
		if (array[j] <= pivot)
		{
		int temp = array[i];

		array[i] = array[j];
		array[j] = temp;
			if (i != j)
				print_array(array, size);
			i++;
		}
	}
	
	array[i] = array[high];
	array[high] = temps;
	if (i != j)
		print_array(array, size);
	return (i);
}
/**
  * array_quick_sort - .
  * @array: array of integers
  * @left: lowest index
  * @right: highest index
  * @size: size of array
  */
void array_quick_sort(int *array, int left, int right, size_t size)
{
	int pivot;

	if (left < right)
	{
		pivot = partition(array, left, right, size);
		array_quick_sort(array, left, (pivot - 1), size);
		array_quick_sort(array, (pivot + 1), right, size);
	}
}
/**
  * quick_sort - sort array of integers using insertion sort
  * @array: array to sort
  * @size: size of array
  */
void quick_sort(int *array, size_t size)
{
	if (size < 2)
		return;
	array_quick_sort(array, 0, size - 1, size);
}
