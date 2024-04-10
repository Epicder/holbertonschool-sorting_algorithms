#include <stdio.h>
#include <stdlib.h>
#include "sort.h"
/**
 * bubble_sort - sortea una array utilizando el algoritmo buble
 * @array: array a ser ordenada
 * @size: size del array
 */
void bubble_sort(int *array, size_t size)
{
size_t i, j;
int temp;
int swap;
for (i = 0; i < size - 1; i++)
{
swap = 0;
for (j = 0; j < size - i - 1; j++)
{
if (array[j] > array[j + 1])
{
temp = array[j];
array[j] = array[j + 1];
array[j + 1] = temp;
swap += 1;
print_array(array, size);
}
}
if (swap == 0)
{
break;
}
}
}
