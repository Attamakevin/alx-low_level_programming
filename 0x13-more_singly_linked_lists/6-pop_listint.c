#include "lists.h"
#include <stdlib.h>
/**
* pop_listint - a function to delete
* node from begining of a list
* @h: head pointer
Return: updated list on success or zero if failed
*/
int pop_listint(listint_t **head)
{
	listint_t *tmp;

	if (*head == 0)
		return (0);
	else
	tmp = *head;
	head = *head->next;
	free(tmp);
}
