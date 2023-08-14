#include "sort.h"


/**
 * bubble_sort - sorts the array by in ascending order using bubble technique
 *
 * @array: array of integers
 * @size: size of the array
 */
void bubble_sort(int *array, size_t size)
{
	unsigned int i;
	int temp;
	bool still_swapping;

	if (size < 2)
		return;

	do {
		still_swapping = false;
		for (i = 0; i < (size - 1); i++)
		{
			if (array[i] > array[i + 1])
			{
				temp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = temp;
				print_array(array, size);
				still_swapping = true;
			}
		}
	} while (still_swapping);
}
