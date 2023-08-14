#include "sort.h"

/**
 * selection_sort - sorts by ascending value for array in selection sort meth
 *
 * @array: input array to be sorted
 * @size: size of the array
 */
void selection_sort(int *array, size_t size)
{
	unsigned int i, j, num;
	int temp;
	bool still_swapping = true;

	do {
		for (i = 0; i < size; i++)
		{
			still_swapping = false;
			num = i;
			temp = array[i];
			for (j = i + 1; j < size; j++)
			{
				if (array[j] < array[num])
				{
					num = j;
					still_swapping = true;
				}
			}
			if (still_swapping)
			{
				temp = array[num];
				array[num] = array[i];
				array[i] = temp;
				print_array(array, size);
			}
		}
	} while (still_swapping);
}
