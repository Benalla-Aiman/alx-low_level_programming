#include <stdio.h>
#include "function_pointers.h"
/**
* int_index - searches for an integer in an array using a comparison function
* @array: the array to search
* @size: the size of the array
* @cmp: pointer to the comparison function to use
*
* Return: the index of the first element for which cmp does not return 0,
* or -1 if no element is found or size <= 0
*/
int int_index(int *array, int size, int (*cmp)(int))
{
int i;
if (array && cmp)
{
for (i = 0; i < size; i++)
{
if (cmp(array[i]))
return (i);
}
}
return (-1);
}
