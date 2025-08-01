#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

void selection_sort(int *array, size_t size)
{
	int i, j, min_value, min_value_index, tmp;

	for (i = 0; i < (int)size-1; i++)
	{	
		min_value = array[i];
		for (j = i + 1; j <= (int)size - 1; j++)
		{
			if (array[j] < min_value)
			{
				min_value = array[j];
				min_value_index = j;
			}
		}
		if (min_value < array[i])
		{
			tmp = array[i];
			array[i] = min_value;
			array[min_value_index] = tmp;
			print_array(array, size);
		}
	}
}