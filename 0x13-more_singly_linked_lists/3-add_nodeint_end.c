#include "lists.h"
#include <stdlib.h>
/**
* add_nodeint_end - adds a new node at the end of a listint_t list
* @head: double pointer to the head of the list
* @n: value of the new node
* Return: the address of the new element, or NULL if it failed
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *new;
listint_t *temp;
new = malloc(sizeof(listint_t));
if (new == NULL)
return (NULL);
new->n = n;
new->next = NULL;
if (*head == NULL)
{
*head = new;
return (new);
}
temp = *head;
while (temp->next)
temp = temp->next;
temp->next = new;
return (new);
}
