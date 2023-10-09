#include "search_algos.h"

/**
 * linear_skip - searches for a value in a sorted skip list of integers.
 * @list: pointer to the head of the skip list to search in
 * @value: value to search for
 *
 * Return: pointer on the first node where value is located, or NULL if not
 * found or if list is NULL
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
    skiplist_t *prev, *node;

    if (!list)
        return (NULL);

    node = list->express;
    prev = list;

    while (node)
    {
        printf("Value checked at index [%lu] = [%d]\n", node->index, node->n);
        if (node->n >= value)
            break;
        prev = node;
        node = node->express;
    }

    if (!node)
        printf("Value found between indexes [%lu] and [%lu]\n", prev->index, prev->next->index);
    else
        printf("Value found between indexes [%lu] and [%lu]\n", prev->index, node->index);

    while (prev)
    {
        printf("Value checked at index [%lu] = [%d]\n", prev->index, prev->n);
        if (prev->n == value)
            return (prev);
        prev = prev->next;
    }

    return (NULL);
}

