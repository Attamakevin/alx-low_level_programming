#include "lists.h"
#include <stdlib.h>
/**
* sum_listint - function to sum n data of a linked list
* @head: head pointer
* Return: sum
*/
int sum_listint(listint_t *head)
{
	int sum = 0;

if (!head)
	{
	return (sum);
	}

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}

