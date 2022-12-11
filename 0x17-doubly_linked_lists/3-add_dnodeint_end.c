#include "lists.h"
/**
* add_dnodeint_end - function to add a node to the end of doubly linked list
* @head: pointer to the head node
* @n: the new node to be added
* Return: address of the new node on success or NULL if it fail
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *h;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	 h = (*head);
	new_node->n = n;
	new_node->next = NULL;

	if (h != NULL)
	{
		while (h->next != NULL)
		{
			h = h->next;
		}
	h->next = new_node;
	}
	else
	{
		(*head) = new_node;
	}
	new_node->prev = h;
return (new_node);
}
