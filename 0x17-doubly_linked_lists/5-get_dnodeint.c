#include "lists.h"
/**
* get_dnodeint_at_index - function that returns a node at a given index
* @head: pointer to the head node
* @index: index of node to be returned
* Return: reurn the node at the given index
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;
	
	if (head == NULL)
		return (NULL);
	while (head->prev != NULL)
		head = head->prev;
	i = 0;
	while (head != NULL)
	{
		if (i == index)
			break;
		head = head->next;
		i++;
	}
return (head);
}
