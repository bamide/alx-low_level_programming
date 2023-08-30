#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_listint_safe - Frees a listint_t list.
 * @h: Double pointer to the head of the list.
 *
 * This function frees a linked list of type listint_t in a safe manner.
 * It also sets the head pointer to NULL.
 *
 * Return: The size of the list that was freed.
 */
typedef struct listint_t
{
    int data;
    struct listint_t *next;
} listint_t;

size_t free_listint_safe(listint_t **h)
{
    size_t size = 0;
    listint_t *current = *h;
    listint_t *temp;

    while (current != NULL)
    {
        temp = current;
        current = current->next;
        free(temp);
        size++;
    }

    *h = NULL;
    return size;
}

