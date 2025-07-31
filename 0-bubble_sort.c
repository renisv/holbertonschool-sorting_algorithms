#include "sort.h"
#include <stddef.h>

void bubble_sort(int *array, size_t size)
{
	int i, j, tmp, swapped;

	for (i = 0; i < (int) size - 1; i++)
	{
		swapped = 0;
		for (j = 0; j <  (int) size - 1 - i; j++)
		{
			if (array[j] > array[j + 1])
			{
				tmp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = tmp;

				print_array(array, size);
				swapped = 1;
			}	
		}
		if (swapped == 0)
			break;
	}
}