#include <stdlib.h>
#include <stddef.h>

typedef struct listint_s {
    int n;
    struct listint_s *next;
} listint_t;

/**
 * free_listint_safe - Frees a listint_t list.
 * @h: Double pointer to the head of the list.
 *
 * This function frees a linked list of type listint_t in a safe manner.
 * It also sets the head pointer to NULL.
 *
 * Return: The size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
    size_t size = 0;
    listint_t *current, *temp;

    if (h == NULL || *h == NULL)
        return 0;

    current = *h;
    while (current != NULL)
    {
        size++;
        temp = current;
        current = current->next;
        free(temp);
        if (temp <= current)
            break; // Avoid circular loops
    }

    *h = NULL;
    return size;
}

