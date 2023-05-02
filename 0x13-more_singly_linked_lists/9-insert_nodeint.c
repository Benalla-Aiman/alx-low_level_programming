#include "lists.h"
#include <stdlib.h>
/**
* insert_nodeint_at_index - inserts a new node at a given position
* @head: double pointer to the head of the list
* @idx: index of the list where the new node should be added
* @n: value of the new node
* Return: the address of the new node, or NULL if it failed
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *new;
listint_t *temp;
unsigned int i;
if (head == NULL)
return (NULL);
new = malloc(sizeof(listint_t));
if (new == NULL)
return (NULL);
new->n = n;
if (idx == 0)
{
new->next = *head;
*head = new;
return (new);
}
temp = *head;
for (i = 0; i < idx - 1 && temp; i++)
temp = temp->next;
if (temp == NULL)
{
free(new);
return (NULL);
}
new->next = temp->next;
temp->next = new;
return (new);
}
