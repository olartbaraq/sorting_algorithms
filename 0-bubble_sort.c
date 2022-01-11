#include "sort.h"
#include <stdio.h>

/**
 * bubble_sort - Prints an array of sorted integers in ascending order
 *
 * @array: The array to be printed
 * @size: Number of elements in @array
 */

void bubble_sort(int *array, size_t size)
{
unsigned int i, j, temp;
if (array == NULL || size < 2)
return;
for (i = 0; i < size - 1; i++)
{
for (j = 0; j < size - 1; j++)
{
if (array[j] > array[j + 1])
{
temp = array[j + 1];
array[j + 1] = array[j];
array[j] = temp;
print_array(array, size);
}
}
}
}
