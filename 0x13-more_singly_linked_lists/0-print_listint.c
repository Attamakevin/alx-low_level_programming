#include "lists.h"
#include <stdio.h>
/**
* print_listint -  a function that prints the elements of singly linked list
* @h: pointer to the first node of the list
* Return: number of nodes in the list
*/
size_t print_listint(const listint_t *h)
{
	int i = 0;
	
	while (h)
	{
		printf("%d", h->n);
		i++;
		h = h->next;
	printf("\n");
	}
return (i);
}
