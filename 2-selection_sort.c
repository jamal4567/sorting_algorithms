#include "sort.h"

/**
* swap_int - swaps the values of two integers
* @a: take an int
* @b: take an int
**/
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/**
 *selection_sort - sorts an array of integers in ascending order using
 *
 *@array: array
 *
 *@size: the size of the array
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j = 0;
	int *tmp;

	if (array)
	{
		tmp = NULL;
		while (array && j < size - 1)
		{
			tmp = NULL;
			for (i = j + 1; i < size; i++)
			{
				if (array[i] < array[j])
				{
					if (tmp && array[i] < *tmp)
						tmp = &array[i];
					if (!tmp)
						tmp = &array[i];
				}
			}
			if (tmp)
			{
				swap_int(tmp, &array[j]);
				print_array(array, size);
			}
			j++;
		}
	}
}
