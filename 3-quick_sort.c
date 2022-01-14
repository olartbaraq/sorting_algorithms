#include "sort.h"
#include <stdio.h>

/**
 * partition - finds the partition for the quicksort using the Lomuto scheme
 * @array: array to sort
 * @left: lowest index of the partition to sort
 * @right: highest index of the partition to sort
 * @size: size of the array
 *
 * Return: index of the partition
 */

int partition(int *array, int left, int right, size_t size)
{
int i, j, tmp, pivot;

pivot = array[right];
i = left - 1;

for (j = left; j < right; j++)
{
if (array[j] <= pivot)
{
i++;
if (i == j)
continue;
tmp = array[i];
array[i] = array[j];
array[j] = tmp;
print_array(array, size);
}
}
if (array[right] <= array[i + 1])
{
i++;
if (i == right)
return (i);
tmp = array[i];
array[i] = array[right];
array[right] = tmp;
print_array(array, size);
}
return (i);
}

/**
 * quicksort - sorts a partition of an array of integers
 * @array: array to sort
 * @left: lowest index of the partition to sort
 * @right: highest index of the partition to sort
 * @size: size of the array
 *
 * Return: void
 */
void quicksort(int *array, int left, int right, size_t size)
{
int loc;
if (left < right)
{
loc = partition(array, left, right, size);
quicksort(array, left, loc - 1, size);
quicksort(array, loc + 1, right, size);

}
}


/**
 * quick_sort - sorts an array of integers in ascending order using the
 * Quick sort algorithm
 * @array: The array to sort
 * @size: The size of the array
 *
 * Return: void
 */

void quick_sort(int *array, size_t size)
{
if (array == NULL || size < 2)
return;
quicksort(array, 0, size - 1, size);
}
