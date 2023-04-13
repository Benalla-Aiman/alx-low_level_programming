#include <stdlib.h>
#include <string.h>
/**
* _calloc - allocates memory for an array using malloc
* @nmemb: number of elements in the array
* @size: size of each element in bytes
*
* Return: pointer to allocated memory
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
void *new_mem;
unsigned int total_size;
if (nmemb == 0 || size == 0)
return (NULL);
total_size = nmemb * size;
new_mem = malloc(total_size);
if (new_mem == NULL)
return (NULL);
memset(new_mem, 0, total_size);
return (new_mem);
}
