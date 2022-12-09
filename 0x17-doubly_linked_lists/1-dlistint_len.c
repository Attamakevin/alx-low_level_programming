#include "lists.h"
/**
* dlistint_len - function to find length of list
* @h: pointer to the first node
* Return: length of the list
*/
size_t dlistint_len(const dlistint_t *h)
{
 size_t i;
const dlistint_t *temp = h;

 if (!h || h == 0)
	return (0);
 i = 0;
while (temp)
{
	temp = temp->next;
	i++;
}
return (i);	
}
