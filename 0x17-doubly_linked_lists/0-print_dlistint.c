#include "lists.h"
/**
 * print_dlistint - a function that prints all list elements
 * @h: a pointer to the head of the list
 * Return: objects of the linked lists
 */
size_t print_dlistint(const dlistint_t *h)
{
  const dlistint_t *temp;
  size_t count = 0;
  
  temp = h;
  if (temp == NULL)
    return count;

  while (temp != NULL)
  {
    printf("%d\n",temp->n);
    temp = temp->next;
    count++;
  }
  return (count);
}
