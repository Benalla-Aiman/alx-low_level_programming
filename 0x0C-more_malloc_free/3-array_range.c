#include <stdlib.h>
/**
* array_range - creates an array of integers
* @min: minimum value (included)
* @max: maximum value (included)
*
* Return: pointer to the newly created array
*/
int *array_range(int min, int max)
{
int *new_arr;
int i, size;
if (min > max)
return (NULL);
size = max - min + 1;
new_arr = malloc(sizeof(int) * size);
if (new_arr == NULL)
return (NULL);
for (i = 0; i < size; i++)
new_arr[i] = min + i;
return (new_arr);
}
