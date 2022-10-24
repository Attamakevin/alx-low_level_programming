#include "lists.h"
/**
* listint_len - function that return the number
* of elements in a singly linked list
@h: pointer to first node of the list
Return: number of elements in the  list
*/
size_t listint_len(const listint_t *h)
{
	int nodes = 1;
	{
	while (h->next != NULL)
	h = h->next;
	nodes++;
	}
	return (nodes);
}
