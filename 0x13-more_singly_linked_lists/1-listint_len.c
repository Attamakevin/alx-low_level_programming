#include "lists.h"
#include <stdio.h>
/**
* listint_len - function that return the number
* of elements in a singly linked list
* @h: list
* Return: size_t
*/
size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
	h = h->next;
	nodes++;
	}
	return (nodes);
}
