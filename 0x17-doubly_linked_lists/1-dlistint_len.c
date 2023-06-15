#include "lists.h"
/**
 *  dlistint_len - a function that prints length of a linked list
 * @h: a pointer to the head of linked list
 * Return: number of elements in a linked list
 */
size_t dlistint_len(const dlistint_t *h)
{
  const dlistint_t *temp;
  size_t count = 0;

  temp = h;
  if (temp == NULL)
    return (count);

  while (temp != NULL)
    count++;

  return (count);
}
    
