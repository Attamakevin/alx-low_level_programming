#include "lists.h"
#include <stdlib.h>
/**
* pop_listint - a function to delete
* node from begining of a list
* @head: head pointer
* Return: head node
*/
int pop_listint(listint_t **head)
{

	listint_t *second;

	int data;



	if (!head || !*head)

		return (0);

	data = (*head)->n;

	second = (*head)->next;

	(*head)->next = 0;

	free(*head);

	*head = second;

	return (data);
}
