#include <stdlib.h>
#include <string.h>
/**
* _realloc - reallocates a memory block using malloc and free
* @ptr: pointer to the memory previously allocated with a call to malloc
* @old_size: size, in bytes, of the allocated space for ptr
* @new_size: new size, in bytes of the new memory block
*
* Return: pointer to the newly allocated memory
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
void *new_mem;
if (new_size == old_size)
return (ptr);
if (ptr == NULL)
return (malloc(new_size));
if (new_size == 0 && ptr != NULL)
{
free(ptr);
return (NULL);
}
new_mem = malloc(new_size);
if (new_mem == NULL)
return (NULL);
if (new_size > old_size)
memcpy(new_mem, ptr, old_size);
else
memcpy(new_mem, ptr, new_size);
free(ptr);
return (new_mem);
}
