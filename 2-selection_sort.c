#include "sort.h"
#include <stdio.h>

/**
 * selection_sort - sorts an array of integers in
 * ascending order using selection sort
 * @array : holds number of elements in the array7
 * @size : number of elements in the array
 * returns : the sorted array of elemnts
 */

void selection_sort(int *array, size_t size)
{
unsigned int i, j, min, temp;
if (array == NULL || size < 2)
return;
for (i = 0; i < size - 1; i++)
{
min = i;
for (j = i + 1; j < size; j++)
{
if (array[j] < array[min])
min = j;
}
if (min != i)
{
temp = array[i];
array[i] = array[min];
array[min] = temp;
print_array(array, size);
}
}
}
