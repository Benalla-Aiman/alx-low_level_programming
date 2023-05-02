#include <stdlib.h>
#include "lists.h"
/**
* free_listint_safe - frees a listint_t list
* @h: double pointer to the head of the listint_t list
*
* Return: the size of the list that was freed
*/
size_t free_listint_safe(listint_t **h)
{
size_t count = 0;
listint_t *slow, *fast, *tmp;
if (h == NULL || *h == NULL)
return (0);
slow = *h;
fast = *h;
while (slow != NULL && fast != NULL && fast->next != NULL)
{
count++;
tmp = slow;
slow = slow->next;
fast = fast->next->next;
free(tmp);
if (slow == fast)
{
count++;
free(slow);
*h = NULL;
return (count);
}
}
while (slow != NULL)
{
count++;
tmp = slow;
slow = slow->next;
free(tmp);
}
*h = NULL;
return (count);
}
