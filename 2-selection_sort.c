#include <stdio.h>
#include "sort.h"
#include <stdlib.h>

/**
 * selection_sort - sortea una array utilizando selection sort
 * @array: array a ser sorteada
 * @size: size del array
 */

void selection_sort(int *array, size_t size)
{
size_t i;
size_t j;
int temp;
for (i = 0; i < size - 1; i++)
{
size_t min = i;
for (j = i + 1; j < size; j++)
{
if (array[j] < array[min])
{
min = j;
}
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
