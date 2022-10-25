#include "lists.h"
#include <stdlib.h>
/**
* free_listint - function to free a linked list
* @head: pointer to the first node in the list
* Return: return zero
*/ 
void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head)
	{
	tmp = head;
	head = head->next;
	free(tmp);
	}
}	
