#include "lists.h"
/**
* add_dnodeint - function to add node at the begining of list
* @head : point to the head node
* @n: data parameter of the new node
* Return: the address of the new node
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		{
			return (NULL);
		}
	new_node->n = n;
	new_node->next = (*head);
	new_node->prev = NULL;
/*(*head) = new_node->next;*/
	if((*head) != NULL)
	{
	while ((*head)->prev != NULL)
		{
			(*head)->prev = new_node;
		}
	}
	(*head) = new_node;
return (new_node);
}

