#include "lists.h"
#include <stdlib.h>
/**
* sum_listint - function to sum n data of a linked list
* @head: head pointer
* Return: sum
*/
int sum_listint(listint_t *head)
{
	listint_t *tmp;
	int sum = 0;
	int i = 0;

	tmp = head;
	while (tmp->next != 0)
	{
		tmp = tmp->next;
		i++;
		head = tmp;
		sum += head->n;
	}
	return (sum);
}
		

