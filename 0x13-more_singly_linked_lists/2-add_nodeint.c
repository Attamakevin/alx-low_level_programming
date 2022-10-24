#include "lists.h"
#include <stdlib.h>
/**
* add_nodeint - a function to add new node to beginning of list
* @h: pointer to the first node of the list
* @n: number of nodes
* Return: new node
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	struct listint_s *newnode;

	if (!head)
		return (0);
	newnode = malloc(sizeof(listint_t));
	if(!newnode)
		return (0);
	newnode ->n = n;
	newnode->next = *head;
	*head = newnode;
	return (newnode);
}
