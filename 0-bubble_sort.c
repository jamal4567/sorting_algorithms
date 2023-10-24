#include "sort.h"
/**
 *bubble_sort - sorts an array of integers in ascending order
 *@array: array of integer
 *@size: the size of the array
 */
void bubble_sort(int *array, size_t size)
{
	size_t n = 0, len;
	int hold;

	if (array)
	{
		while (n < size)
		{
			for (len = 0; len < size - 1; len++)
			{
				if (array[len] > array[len + 1])
				{
					hold = array[len];
					array[len] = array[len + 1];
					array[len + 1] = hold;
					print_array(array, size);
				}
			}
			n++;
		}
	}
}
