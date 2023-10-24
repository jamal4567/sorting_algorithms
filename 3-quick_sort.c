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
*partition - partition an array
*@beg: beginning of array
*@end: end of array
*@size: size of array
*Return: new beg int
*/
int partition(int beg, int end, int *array, size_t size)
{
	int a;
	
	a = beg;
	while (a != end)
	{
		if (array[a] < array[end])
		{
			if (a != beg)
			{
				swap_int(array + a, array + beg);
				print_array(array, size);
			}
			a++;
			beg++;
		}
		else
			a++;
	}
	if (beg != end)
	{
		if (array[beg] > array[end])
		{
			swap_int(array + end, array + beg);
			print_array(array, size);
		}
		beg++;
	}
	return (beg);
}

/**
*recursev_sort - sort recursively an array of integer
*@beg: begining of the array
*@end: end of the array
*@size: size of the array
*/
void recursev_sort(int beg, int end, int *array, size_t size)
{
	int a;
	
	if (beg < end)
	{
		a = partition(beg, end, array, size);
		recursev_sort(beg, a - 1, array, size);
		recursev_sort(a + 1, end, array, size);
	}
}

/**
*quick_sort -  sorts an array of integers in ascending order
*@array: array to sort
*@size: size of array
*/
void quick_sort(int *array, size_t size)
{
	recursev_sort(0, size - 1, array, size);
}
