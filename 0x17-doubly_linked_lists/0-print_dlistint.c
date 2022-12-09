#include "lists.h"
#include <stdio.h>
/**
* print_dlistint - a function to list elements of doubly linked list
* @h: pointer to the head node
* Return: elements of the linked list
*/
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *temp = h;
	int i;
	if (h == 0)
	{
		exit (0);
	}
i = 0;
while(temp)
	{
	printf("%d\n", temp->n);
	temp = temp->next;
	i++;
	}
return (i);
}
