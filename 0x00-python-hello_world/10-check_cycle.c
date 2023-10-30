#include "lists.h"
/**
 * check_cycle - checks if a singly linked list has a cycle in it
 * 
 * @list: ptr to the list
 *
 * Return: 0 if there is no cycle, 1 if there
 */
int check_cycle(listint_t *list)
{
listint_t *first, *second;

if (!list)
return (0);

first = list;
second = list->next;

while (first && second && second->next)
{
first = first->next;
second = second->next->next;
if (first == second)
return (1);
}

return (0);
}
