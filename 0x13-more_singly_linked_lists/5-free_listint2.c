#include "lists.h"
#include <stdlib.h>
/**
* free_listint2 - a function to free list by
* setting head to NULL
*@head: pointer to the first node
* Return zero
*/
void free_listint2(listint_t **head)
{
	while (*head)
	*head = 0;
}
